#include <iostream>
using namespace std;

class Person
{
public:
  Person() {}
  // this指针的本质 是指针常量 指针的指向是不可以修改的，即Person * const this
  // 在成员函数后面加const，修饰的是this指向，让指针指向的值也不可以修改，即void showPerson() const 使得 const Person * const this
  void showPerson() const // 当加了一个const
  {
    // m_A = 100; //相当于 this->m_A;，由于加了一个const，所以指针指向的值不可以更改
    // this = NULL; //this指针不可以修改指针的指向的
    this->m_B = 100; // 加了mutable就可以修改this指向的值了
  }

  void func()
  {
    m_A = 100;
  }

  int m_A;
  mutable int m_B; // 特殊变量，即使在常函数中，也可以修改这个值，加上关键字mutable
};

void test01()
{
  Person p;
  p.showPerson();
}

// 常对象
void test02()
{
  const Person p; // 在对象前加const，变为常对象
  // p.m_A = 100;  //常对象不可以修改普通变量
  p.m_B = 100; // m_B是特殊值，在常对象下也可以修改

  // 常对象只能调用常函数
  p.showPerson();
  // p.func(); //常对象 不可以调用普通成员函数，因为普通成员函数可以修改属性
}

int main()
{
  test01();

  return 0;
}