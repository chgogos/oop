class Circle
{
public:
    Circle();         // αυτός είναι ένας κατασκευαστής
    Circle(double r); // και αυτός είναι ένας κατασκευαστής
    void setCenter(double x, double y);
    void SetRadius(double r);
    void Draw();
    double AreaOf();

private:
    double radius;
    double center_x;
    double center_y;
};
