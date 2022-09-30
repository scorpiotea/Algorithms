#include <iostream>
#include <cmath>

void calc_quadratic_equation(int &a, int &b, int &c);

int main()
{
  int a{2};
  int b{9};
  int c{7};
  int d{0};

  calc_quadratic_equation(a, b, c);
  calc_quadratic_equation(d, b, c);

  return 0;
}

void calc_quadratic_equation(int &a, int &b, int &c)
{
  int x{};

  if (a == 0)
  {
    x = -c / b;

    std::cout << "Result: " << x << std::endl;
  }

  int delta = delta = b * b - 4 * a * c;

  int x0{};
  int x1{};
  int x2{};

  if (delta > 0)
  {
    delta = sqrt(delta);

    x1 = (-b + delta) / (2 * a);
    x2 = (-b - delta) / (2 * a);

    std::cout << "Result: " << x1 << "," << x2 << std::endl;
  }
  else if (delta == 0)
  {
    x0 = -b / (2 * a);

    std::cout << "Result: " << x0 << std::endl;
  }
  else if (delta < 0)
  {
    std::cout << "NO RESULTS!" << std::endl;
  }
}
