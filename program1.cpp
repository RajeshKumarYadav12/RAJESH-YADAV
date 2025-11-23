#include<iostream>
using namespace std;

class Calculator
{
public:
  double calculate(double a, double b, string op)
  {
    if (op == "add")
      return a + b;
    else if (op == "sub")
      return a - b;
    else if (op == "mul")
      return a * b;
    else if (op == "div")
      return b != 0 ? a / b : 0;
    else
    {
      cout << "Invalid Operation";
      return 0;
    }
  }
};

int main()
{
  double a, b;
  string op;
  cin >> a >> b >> op;

  Calculator c;
  cout << c.calculate(a, b, op);

  return 0;
}
