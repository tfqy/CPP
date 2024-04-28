#include <iostream>
using namespace std;

class Myclass

{
public:
  Myclass(int a, int b)
  {
    x = a;
    y = b;
  }
  friend void copy(Myclass &dest, Myclass &src);

  void copy(Myclass &my);

  void print()

  {
    cout << "x=" << x << endl;

    cout << "y=" << y << endl;
  }

private:
  int x, y;
};

void Myclass::copy(Myclass &my)
{
  this->x = my.x;
  this->y = my.y;
}

void copy(Myclass &dest, Myclass &src)
{
  dest.x = src.x;
  dest.y = src.y;
}

int main()
{
  int a, b;
  cin >> a >> b;
  Myclass obj1(a, b);
  Myclass obj2(0, 0);
  obj2.copy(obj1); // 使用成员函数拷贝
  // copy(obj2, obj1); // 使用友元函数拷贝
  obj2.print();
  return 0;
}