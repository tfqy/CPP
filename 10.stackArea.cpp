#include <iostream>
using namespace std;

// 栈区数据注意事项：不要返回局部变量的地址
// 栈区的数据由编译器管理开辟和释放

int *func(int b) // 返回的是一个地址 int*；形参的数据也会放在栈区
{
  int a = 10; // 局部变量存放的数据10存放在栈区，栈区的数据在函数执行完后自动释放
  return &a;  // 返回局部变量的地址，即数据10的的地址
}

int main()
{
  // 接收func函数的返回值
  int *p = func(1); // 用指针接收栈区上的数据10的地址，由于栈区上数据10已经被释放，所以对地址解引用会获得乱码的值。

  cout << *p << endl;
  return 0;
}