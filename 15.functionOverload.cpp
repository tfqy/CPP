#include <iostream>
using namespace std;

// 函数重载
void f()
{
  cout << "function is called" << endl;
}

void f(int a)
{
  cout << a << endl;
}

int main()
{
  f(1);
  return 0;
}