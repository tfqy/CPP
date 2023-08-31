#include <iostream>
using namespace std;
#include <string>

// 类模板成员函数类内实现
template <class T1, class T2>
class Person
{
public:
  Person(T1 name, T2 age); // 构造函数声明

  void showPerson(); // 函数声明

  T1 m_Name;
  T2 m_Age;
};

// 构造函数类外实现
template <class T1, class T2>
// Person<T1,T2>说明这是一个Person类模板的类外成员函数实现，Person::Person(T1 name, T2 age)表示类的函数的类外实现，Person(T1 name, T2 age)表示构造函数
Person<T1, T2>::Person(T1 name, T2 age)
{
  this->m_Age = age;
}

// 成员函数类外实现
template <class T1, class T2>
void Person<T1, T2>::showPerson() // 有<T1, T2>表示是类模板的成员函数类外实现，Person表示是Person作用域的showPerson函数
{
  cout << "姓名：" << this->m_Name << " 年龄：" << this->m_Age << endl;
}

void test01()
{
  Person<string, int> s1("张三", 18);
  s1.showPerson();
}

int main()
{
  test01();

  // system("pause");

  return 0;
}