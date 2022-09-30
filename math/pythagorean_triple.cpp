#include <iostream>

void check_for_pythagorean_triple(int a, int b, int c);

int main()
{
  check_for_pythagorean_triple(5, 2, 4);
  check_for_pythagorean_triple(3, 5, 4);


  return 0;
}

void check_for_pythagorean_triple(int a, int b, int c)
{
  ((a * a) + (b * b)) == (c * c) || ((a * a) + (c * c)) == (b * b) || ((c * c) + (b * b)) == (a * a) ? std::cout << "The numbers are the Pythagorean triple"<<std::endl : std::cout << "The numbers aren't the Pythagorean triple"<<std::endl;
}