#include <iostream>

int linear_search(int arr[], int x, int arr_length);

int main()
{
  int arr[] = {1, 5, 34, 8, 23, 56};
  int x{34};

  int arr_length = std::size(arr);

  int index = linear_search(arr, x, arr_length);

  std::cout<<"The number your searching for is at index "<<index;

  return 0;
}

int linear_search(int arr[], int x, int arr_length)
{
  for (int i{0}; i < arr_length; i++)
  {
    if(arr[i] == x)
    {
      return i;
    }
  }
  return 0;
}