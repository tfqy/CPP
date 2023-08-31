#include <iostream>
using namespace std;
#include <string>

// 类模板中成员函数创建时机
// 类模板中成员函数在调用时才去创建
class Person1
{
public:
  void showPerson1() // 普通类中的成员函数一开始就可以创建。
  {
    cout << "Person1 show" << endl;
  }
};

class Person2
{
public:
  void showPerson2()
  {
    cout << "Person2 show" << endl;
  }
};

template <class T>
class MyClass
{
public:
  T obj;

  // 类模板中的成员函数
  void func1() // 类模板中的成员函数在调用时才创建。
  {
    obj.showPerson1();
  }

  void func2()
  {
    obj.showPerson2();
  }
};

void test01()
{
  MyClass<Person1> m;
  m.func1();
  // m.func2();  // 报错，声明了模板是Person1类型，obj.showPerson2()是调用Person1类中的showPerson2()方法，然而Person1类中没有showPerson2()方法，所以会报错
  //  如果传入的是<Person2>，此方法就不会报错
}

int main()
{
  test01();

  // system("pause");

  return 0;
}