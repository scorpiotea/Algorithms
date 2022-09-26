#include <bitset>
#include <iostream>

long multiply_by_3(long n);
long multiply_by_7(long n);
long multiply_by_9(long n);

int main()
{
  long n{63};

  std::cout << multiply_by_3(n) << std::endl;
  std::cout << multiply_by_7(n) << std::endl;
  std::cout << multiply_by_9(n);
}

long multiply_by_3(long n)
{
  return ((n << 2) - n);
}

long multiply_by_7(long n)
{
  return ((n << 3) - n);
}

long multiply_by_9(long n)
{
  return ((n << 3) + n);
}