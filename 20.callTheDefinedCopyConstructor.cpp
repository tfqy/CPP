#include <iostream>
using namespace std;

// 构造函数的调用规则
// 1、创建一个类，C+=编译器会给每个类都添加至少3个函数
// 默认构造 (空实现)
// 析构函数 (空实现)
// 拷贝构造 (值拷贝)

class Person
{
public:
  Person()
  {
    cout << "Person 默认构造函数调用" << endl;
  }

  Person(int age)
  {
    m_Age = age;
    cout << "Person 有参构造函数调用" << endl;
  }

  Person(const Person &p)
  {
    m_Age = p.m_Age;
    cout << "Person 拷贝构造函数调用" << endl;
  }

  ~Person()
  {
    cout << "Person 析构函数调用" << endl;
  }

  int m_Age;
};

void test01()
{
  Person p;
  p.m_Age = 18;

  Person p2(p);

  cout << "p2的年龄：" << p2.m_Age << endl;
}

int main()
{
  test01();
  return 0;
}