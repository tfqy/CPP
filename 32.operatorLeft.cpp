#include <iostream>
using namespace std;

// 左移运算符
class Person
{

  friend ostream &operator<<(ostream &out, Person &p);

public:
  Person(int a, int b)
  {
    m_A = a;
    m_B = b;
  }

  /*
  //利用成员函数重载 左移运算符  p.operator<<(cout) 简化版本 p << cout
  //成员函数不能利用重载<<运算符，因为无法实现cout在左侧
  //当不知道返回值是什么类型的时候，可以先写个void，以后再改
  void operator<<(Person& p)
  {

  }
  */

private:
  int m_A;
  int m_B;
};

// 只能利用全局函数重载左移运算符
// 如果返回类型为void，那么就无法无限追加，也没有办法在后面添加换行符
ostream &operator<<(ostream &cout, Person &p) // 本质 operator << (cout , p) , 简化 cout << p
                                              // cout是别名，这里可以取out、kn...
                                              // cout为ostream输出流数据类型
{
  cout << "m_A= " << p.m_A << " m_B=" << p.m_B;
  return cout;
}

void test01()
{
  Person p(10, 10);

  cout << p << " hello world" << endl;
}

int main()
{
  test01();

  return 0;
}