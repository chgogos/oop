import java.util.Scanner;

enum AccountType {
    CHECKING, SAVINGS, MONEY_MARKET;
}

public class Account implements Comparable<Account> {

    public static int nr_of_accounts = 0;

    private String owner;
    private double balance;
    private AccountType type;

    // default constructor
    public Account() {
        owner = "Noname";
        balance = 0.0;
        type = AccountType.CHECKING;
        Account.nr_of_accounts++;
    }

    // constructor
    public Account(String o, double b, AccountType t) {
        owner = o;
        balance = b;
        type = t;
        Account.nr_of_accounts++;
    }

    // copy constructor
    public Account(Account acc) {
        owner = acc.owner;
        balance = acc.balance;
        type = acc.type;
        Account.nr_of_accounts++;
    }

    // getters - setters
    public String getOwner() {
        return owner;
    }

    public void setOwner(String o) {
        owner = o;
    }

    public double getBalance() {
        return balance;
    }

    public void setBalance(double b) {
        balance = b;
    }

    public AccountType getType() {
        return type;
    }

    public void setAccountType(AccountType t) {
        type = t;
    }

    // methods
    public void deposit(double amt) {
        balance += amt;
    }

    public double withdrawal(double amt) {
        if (amt > balance) {
            double temp = balance;
            balance = 0.0;
            return temp;
        } else {
            balance -= amt;
            return amt;
        }
    }

    public String toString() {
        return String.format("%s %.2f", owner, balance);
    }

    @Override
    public int compareTo(Account o) {
        return Double.compare(balance, o.balance);
    }

    public static void main(String[] args) {
        Account acc1 = new Account();
        System.out.println(acc1);

        Account acc2 = new Account("Ken Lay", 100000.0, AccountType.MONEY_MARKET);
        System.out.println(acc2);

        Account acc3 = new Account(acc2);
        System.out.println(acc3);

        System.out.println("Number of account objects = " + nr_of_accounts);

        System.out.print("Withdraw an amount from account2:");
        Scanner in = new Scanner(System.in);
        double amt = in.nextDouble();
        in.close();

        acc2.withdrawal(amt);
        acc3.deposit(amt * 0.8);
        acc1.deposit(amt * 0.2);
        System.out.println(acc1);
        System.out.println(acc2);
        System.out.println(acc3);

        if (acc2.compareTo(acc3) > 0) {
            System.out.printf("MORE MONEY AT: " + acc2);
        } else if (acc2.compareTo(acc3) < 0) {
            System.out.printf("MORE MONEY AT: " + acc3);
        } else {
            System.out.printf("EQUAL MONEY AT: " + acc2 + " " + acc3);
        }
    }
}

/*
Noname 0,00
Ken Lay 100000,00
Ken Lay 100000,00
Number of account objects = 3
Withdraw an amount from account2:15000 
Noname 3000,00
Ken Lay 85000,00
Ken Lay 112000,00
MORE MONEY AT: Ken Lay 112000,00
*/
