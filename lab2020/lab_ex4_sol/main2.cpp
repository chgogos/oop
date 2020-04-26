#include <iostream>
#include <iomanip>
#include "model.hpp"
#include "sqlite3.h"

using namespace std;

void create_and_populate_db()
{
    sqlite3 *connection = nullptr;
    char *errmsg = nullptr;
    int result = sqlite3_open("test.db", &connection);
    if (result != SQLITE_OK)
    {
        cout << sqlite3_errmsg(connection);
        sqlite3_close(connection);
        return;
    }
    sqlite3_stmt *query = nullptr;
    const char *sql = "DROP TABLE IF EXISTS ORDERS;"
                      "DROP TABLE IF EXISTS LINE_ITEMS;"
                      "CREATE TABLE ORDERS(NUMBER TEXT, ORDERED TEXT, SHIPPED TEXT, SHIP_TO TEXT);"
                      "CREATE TABLE LINE_ITEMS(PRODUCT TEXT, QUANTITY INT, PRICE DOUBLE, ORDER_FK TEXT);"
                      "INSERT INTO ORDERS VALUES('0001', '2020-01-05 10:07:07', '2020-01-07 12:01:01', 'Athens');"
                      "INSERT INTO ORDERS VALUES('0002', '2020-02-07 12:20:01', '2020-02-17 19:30:20', 'Ioannina');"
                      "INSERT INTO ORDERS VALUES('0003', '2020-02-08 10:20:11', '2020-02-15 12:35:22', 'Arta');"
                      "INSERT INTO LINE_ITEMS VALUES('TV', 1, 550.0, '0001');"
                      "INSERT INTO LINE_ITEMS VALUES('A4 PAPER', 5, 10.5, '0001');"
                      "INSERT INTO LINE_ITEMS VALUES('Microphone', 2, 50.5, '0001');"
                      "INSERT INTO LINE_ITEMS VALUES('CAMERA', 1, 230.0, '0002');"
                      "INSERT INTO LINE_ITEMS VALUES('WIFI', 1, 55.9, '0002');"
                      "INSERT INTO LINE_ITEMS VALUES('SSD', 1, 90.5, '0003');";

    result = sqlite3_exec(connection, sql, 0, 0, &errmsg);
    if (result != SQLITE_OK)
    {
        cout << sqlite3_errmsg(connection);
        sqlite3_free(errmsg);
        sqlite3_close(connection);
        return;
    }
    sqlite3_close(connection);
}

void retrieve_data_from_db()
{
    vector<order> orders;
    sqlite3 *connection = nullptr;
    char *errmsg = nullptr;
    int result = sqlite3_open("test.db", &connection);
    if (result != SQLITE_OK)
    {
        cout << sqlite3_errmsg(connection);
        sqlite3_close(connection);
        return;
    }
    const char *sql = "SELECT * FROM ORDERS";
    sqlite3_stmt *query = nullptr;
    result = sqlite3_prepare_v2(connection, sql, -1, &query, nullptr);
    if (result != SQLITE_OK)
    {
        cout << sqlite3_errmsg(connection);
        sqlite3_close(connection);
        return;
    }
    while (SQLITE_ROW == sqlite3_step(query))
    {
        string order_number = (const char *)sqlite3_column_text(query, 0);
        string order_ordered = (const char *)sqlite3_column_text(query, 1);
        string order_shipped = (const char *)sqlite3_column_text(query, 2);
        string order_ship_to = (const char *)sqlite3_column_text(query, 3);
        order an_order = order(order_number, order_ordered, order_shipped, order_ship_to);
        orders.push_back(an_order);
    }
    for (order &an_order : orders)
    {
        const char *sql = "SELECT * FROM LINE_ITEMS WHERE ORDER_FK=?";
        result = sqlite3_prepare_v2(connection, sql, -1, &query, nullptr);
        sqlite3_bind_text(query, 1, an_order.get_number().c_str(), -1, SQLITE_STATIC);
        if (result != SQLITE_OK)
        {
            cout << sqlite3_errmsg(connection);
            sqlite3_close(connection);
            return;
        }
        while (SQLITE_ROW == sqlite3_step(query))
        {
            string line_item_product = (const char *)sqlite3_column_text(query, 0);
            int line_item_quantity = sqlite3_column_int(query, 1);
            double line_item_price = sqlite3_column_double(query, 2);
            an_order.add_line_item(line_item_product, line_item_quantity, line_item_price);
        }
    }
    sqlite3_close(connection);

    for (order an_order : orders)
    {
        cout << an_order << endl;
        cout << "#####################################################" << endl;
    }
}

int main()
{
    cout << "1. drop tables, create and populate DB" << endl;
    cout << "2. retrieve data from DB" << endl;
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
        create_and_populate_db();
        cout << "db created and populated" << endl;
        break;
    case 2:
        retrieve_data_from_db();
        break;
    default:
        cout << "invalid choice" << endl;
    };
}
