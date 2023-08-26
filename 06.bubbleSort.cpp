#include <iostream>

using namespace std;
void bubbleSort(int *arr, int len)
{
  int temp;
  for (int i = 0; i < len - 1; i++)
  {
    for (int j = 0; j < len - 1 - i; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int main(int argc, char const *argv[])
{
  int arr[5] = {5, 3, 4, 1, 2};
  bubbleSort(arr, 5);
  cout << "排序后的数组：" << endl;
  for (int i = 0; i < 5; i++)
  {
    cout << arr[i] << endl;
  }
  return 0;
}
