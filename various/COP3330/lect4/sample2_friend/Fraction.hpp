class Fraction {
 public:
  Fraction();
  Fraction(int n);
  Fraction(int n, int d);
  int GetNumerator();
  int GetDenominator();
  void SetNumerator(int n);
  void SetDenominator(int d);
  void Show();
  double ToDecimal();

 private:
  int numer;
  int denom;

  friend bool Equals(Fraction x, Fraction y);
  friend Fraction Add(Fraction x, Fraction y);
};