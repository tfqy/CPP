#include <iostream>
using namespace std;

class Person
{
public:
  /*
  构造函数型的初始化操作
  固定初始化10、30、40
  Person():m_A(10),m_B(30),m_C(40)
  {

  }
  int m_A;
  int m_B;
  int m_C;
  */

  // 可以灵活的初始化
  Person(int a, int b, int c) : m_A(a), m_B(b), m_C(c)
  {
  }
  int m_A;
  int m_B;
  int m_C;
};

void test01()
{

  Person p(30, 20, 10);
  cout << "m_A:" << p.m_A << endl;
  cout << "m_B:" << p.m_B << endl;
  cout << "m_C:" << p.m_C << endl;
}

int main()
{
  test01();

  system("pause");

  return 0;
}