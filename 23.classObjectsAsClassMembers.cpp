#include <iostream>
using namespace std;

// 手机类
class Phone
{
public:
  Phone(string pName)
  {
    cout << "Phone的构造函数调用" << endl;
    m_PName = pName;
  }

  ~Phone()
  {
    cout << "Phone的析构代码函数调用" << endl;
  }

  string m_PName;
};

// 人类
class Person
{
public:
  // m_Phone(pName) 中m_Phone为phone对象，此语句类似于隐式转换法 Phone m_Phone = pName
  Person(string name, string pName) : m_Name(name), m_Phone(pName) // 掉用的是灵活初始化列表
  {
    cout << "Person的构造函数调用" << endl;
  }

  ~Person()
  {
    cout << "Person的析构代码函数调用" << endl;
  }

  // 姓名
  string m_Name;
  // 手机
  Phone m_Phone;
};

// 当其他类对象作为本类成员，构造时候先构造其他类对象，在构造自身。
// 当其他类对象作为本类成员，析构的顺序与构造相反，想析构自身，再析构其他类对象
void test01()
{

  Person p("张三", "苹果MAX");
  cout << p.m_Name << "m_A:" << p.m_Phone.m_PName << endl;
}

int main()
{
  test01();

  return 0;
}