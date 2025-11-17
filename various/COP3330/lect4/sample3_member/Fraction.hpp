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
  bool Equals(Fraction other);
  Fraction Add(Fraction other);
  void Input();
  bool SetValue(int n, int d);
  double Evaluate();

 private:
  int numer;
  int denom;
};