#include <iostream>

int factorial(int n);

int main()
{

  std::cout << factorial(5) << std::endl;
  std::cout << factorial(0) << std::endl;
  std::cout << factorial(3);

  return 0;
}

int factorial(int n)
{
  return (n == 1 || n == 0) ? 1 : n * factorial(n - 1);
}