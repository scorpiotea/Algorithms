#include <iostream>

void bubblesort(int arr[], int arr_length);

void get_sorted_arr(int arr[], int arr_length);

int main()
{
  int arr[] = {3, 8, 1, 6, 0};
  int arr_length{};
  arr_length = std::size(arr);

  bubblesort(arr, arr_length);
  get_sorted_arr(arr, arr_length);

  return 0;
}

void bubblesort(int arr[], int arr_length)
{
  {
    if (arr_length == 0 || arr_length == 1)
    {
      return;
    }
    for (int i{0}; i < arr_length - 1; i++)
    {
      if (arr[i] > arr[i + 1])
      {
        std::swap(arr[i], arr[i + 1]);
      }
    }
    bubblesort(arr, arr_length - 1);
  }
}

void get_sorted_arr(int arr[], int arr_length)
{
  for (int i{0}; i < arr_length; i++)
  {
    std::cout<<arr[i]<<" ";
  }
}