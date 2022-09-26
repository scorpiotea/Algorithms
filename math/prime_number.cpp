#include <iostream>
#include <cmath>

bool is_prime(int n);

int main()
{
  int n{};

  is_prime(2) ? std::cout << "True\n" : std::cout << "False\n";
  is_prime(68) ? std::cout << "True\n" : std::cout << "False\n";
  is_prime(13) ? std::cout << "True\n" : std::cout << "False\n";

  return 0;
}

bool is_prime(int n)
{
  if (n <= 0)
    return false;

  if (n == 2 || n == 3)
    return true;

  if (n % 2 == 0 || n % 3 == 0)
    return false;

  for (int i{5}; i <= sqrt(n); i += 6)
  {
    if (n % i == 0 || n % (i + 2) == 0)
      return false;
  }
  return true;
}