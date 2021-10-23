class Complex{
 public:

  //constructors
  Complex(double a, double b);
  ~Complex();

  //overloaded Operators
  Complex operator+(const Complex& rhs) const;
  Complex operator-(const Complex& rhs) const;
  Complex operator*(const Complex& rhs) const;
  Complex operator/(const Complex& rhs) const;
  const Complex& operator=(const Complex& rhs); // NON possono essere const poichè cambiano valore
  const Complex& operator+=(const Complex& rhs);
  const Complex& operator-=(const Complex& rhs);
  const Complex& operator*=(const Complex& rhs);
  const Complex& operator/=(const Complex& rhs);

  //getters
  double getRe();
  double getIm();

  //setters
  void setRe(double c);
  void setIm(double d);

  //other functions
  void print();
  double Re();
  double Im();
  double mag();
  double phase();
  double r();
  double phi();

 private:
  double re;
  double im;
};

//global function
Complex operator*(const double& lhs, Complex& rhs);
