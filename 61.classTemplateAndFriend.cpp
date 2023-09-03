#include <iostream>
using namespace std;
#include <string>

// 通过全局函数 打印Person信息

// 提前声明，提前让编译器知道Person模板类存在
template <class T1, class T2>
class Person;

// 全局函数 类外实现
// 让编译器知道Person类存在后，还需要提前让编译器知道printPerson2全局函数存在
template <class T1, class T2>
void printPerson2(Person<T1, T2> p) // 全局函数，所以不需要加作用域
{
  cout << "类外实现--姓名：" << p.m_Name << " 年龄：" << p.m_Age << endl;
}

template <class T1, class T2>
class Person
{
  // 全局函数 类内实现
  friend printPerson(Person<T1, T2> p)
  {
    cout << "类内实现--姓名：" << p.m_Name << " 年龄：" << p.m_Age << endl;
  }

  // 全局函数 类外实现
  // 如果全局函数
  friend void printPerson2<>(Person<T1, T2> p); // 加一个空模板参数列表，表示是函数模板声明，而不是普通函数的声明

  // 只有前面让提前让编译器知道printPerson2存在，由于printPerson2里面有Person类，所以还需要提前让编译器知道Person类存在，才能申明全局函数类外实现：friend void printPerson2<>(Person<T1, T2> p);
public:
  Person(T1 name, T2 age)
  {
    this->m_Name = name;
    this->m_Age = age;
  }

private:
  T1 m_Name;
  T2 m_Age;
};

// 1、全局函数在类内实现
void test01()
{
  Person<string, int> p("Tom", 20);
  printPerson(p);
}

// 2、全局函数在类外实现
void test02()
{
  Person<string, int> p("Jerry", 20);
  printPerson2(p);
}

int main()
{
  test01();
  test02();

  // system("pause");

  return 0;
}