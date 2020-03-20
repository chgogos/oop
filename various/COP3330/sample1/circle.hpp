class Circle
{
public:                       // διεπαφή (interface)
    void SetRadius(double r); // θέτει το μέλος δεδομένων radius στην τιμή r
    double AreaOf();          // επιστρέφει το εμβαδόν του κύκλου
private:
    double radius; // ακτίνα του κύκλου
};
