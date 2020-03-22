class Fraction
{
public:
    // κατασκευαστές
    Fraction();                 // αριθμητής = 0, παρονομαστής = 1
    Fraction(int n, int d = 1); // κατασκευαστής με παραμέτρους, επιπλέον λειτουργεί
                                // ως κατασκευαστής μετατροπής από int σε Fraction

    // αν βγει από σχόλιο η επόμενη δήλωση και μπει σε σχόλιο η προηγούμενη δήλωση του
    // κατασκευαστή Fraction(int, int) τότε δεν θα επιτρέπονται πλέον υπονοούμενες μετατροπές
    // explicit Fraction(int n, int d = 1);

    // ρουτίνες εισόδου/εξόδου
    void Input();
    void Show();

    // getters
    int GetNumerator();
    int GetDenominator();

    // setters
    void SetNumerator(int n);
    void SetDenominator(int d);

    // mutators
    bool SetValue(int n, int d);

    double Evaluate();

    Fraction Add(Fraction other);

private:
    int numer;
    int denom;
};