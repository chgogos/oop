class Fraction {
 public:
  Fraction();
  Fraction(int n);
  Fraction(int n, int d);
  void SetNumerator(int n);
  void SetDenominator(int d);
  double ToDecimal();

 private:
  int numer;
  int denom;
};
