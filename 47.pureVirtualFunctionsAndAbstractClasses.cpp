#include <iostream>
using namespace std;

class Base
{
public:
  // 纯虚函数
  // 只要有一个纯虚函数，这个类就是抽象类
  // 抽象类无法实例化对象
  // 抽象类的子类必须要重写父类中的纯虚函数，否则也属于抽象类
  virtual void func() = 0;
};

class Son : public Base
{
public:
  void func() override
  {
    cout << "func() in Son" << endl;
  }
};

void test01()
{
  // Base b; // Error: cannot declare variable 'b' to be of abstract type 'Base'
  // new Base; // Error: cannot allocate an object of abstract type 'Base'
  // Son s;
  Base *base = new Son;
  base->func();
};

int main(int argc, char const *argv[])
{
  test01();
  return 0;
}
