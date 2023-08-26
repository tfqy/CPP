#include <iostream>

using namespace std;
const int MAX = 3;

int main()
{
  int arr[MAX] = {10, 100, 200};
  int *ptr = arr;
  for (int i = 0; i < MAX; i++)
  {
    cout << "arr[" << i << "]的内存地址为 ";
    cout << ptr << endl;

    cout << "arr[" << i << "] 的值为 ";
    cout << *ptr << endl;

    // 移动到下一个位置
    ptr++;
  }
  return 0;
}