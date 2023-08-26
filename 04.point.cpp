#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  //const修饰变量
  // const修饰指针的指向，指针指向的值不能改变
  int a = 10, b = 5;
  const int *p1 = &a;
  // *p1 = 20; // error: assignment of read-only location ‘* p1’
  p1 = &b;
  cout << *p1 << endl;

  //const修饰指针，指针指向的值可以改变
  int *const p2 = &a;
  *p2 = 20;
  // p2 = &b; // error: assignment of read-only variable ‘p2’
  cout << *p2 << endl;

  //const既修饰指针，又修饰指针指向的值
  const int *const p3 = &a;
  // *p3 = 20; // error: assignment of read-only location ‘* p3’
  // p3 = &b; // error: assignment of read-only variable ‘p3’
  cout << *p3 << endl;
  return 0;
}
