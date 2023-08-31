#include <iostream>
using namespace std;
#include <string>

// 类模板
template <class NameType, class AgeType>
class Person
{
public:
  Person(NameType name, AgeType age) // 构造函数赋初值
  {
    this->m_Name = name;
    this->m_Age = age;
  }

  void showPerson()
  {
    cout << "name:" << this->m_Name << "age:" << this->m_Age << endl;
  }
  NameType m_Name;
  AgeType m_Age;
};

void test01()
{
  Person<string, int> p1("孙悟空", 999); // 尖括号<>里面是模板的参数列表
  p1.showPerson();
}

int main()
{
  test01();

  // system("pause");

  return 0;
}