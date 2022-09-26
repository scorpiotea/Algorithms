#include <iostream>

void eratosthnes_sieve(int n);

int main()
{
  eratosthnes_sieve(20);
  std::cout<<std::endl;
  eratosthnes_sieve(100);
  std::cout<<std::endl;
  eratosthnes_sieve(30);

  return 0;
}

void eratosthnes_sieve(int n)
{
  int *arr{new int[n + 1]{}};

  for (int i{2}; (i * i) < n; i++)
  {
    if (arr[i] == 0)
    {
      for (int j{i * 2}; j < n; j++)
      {
        if (j % i == 0 && j != i)
        {
          arr[j] = 1;
        }
      }
    }
  }

  for (int i{2}; i < n; i++)
  {
    if (arr[i] == 0)
      std::cout << i << " ";
  }

  delete[] arr;
  arr = nullptr;
}
