#include <iostream>
using namespace std;

// 占位参数
void f(int a = 10, int = 10)
{
  cout << a << endl;
}

int main()
{
  f(1, 2);
  return 0;
}