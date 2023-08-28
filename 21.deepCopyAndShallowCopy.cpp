#include <iostream>
using namespace std;

class Person
{
public:
  Person()
  {
    cout << "Person的默认构造函数调用" << endl;
  }
  Person(int age, int height)
  {
    m_Age = age;
    m_Height = new int(height); // 把数据创建在堆区，用指针接收new创建的地址
    cout << "Person的有参构造函数调用" << endl;
  }

  // 自己实现拷贝函数 解决浅拷贝带来的问题
  Person(const Person &p)
  {
    cout << "Person 拷贝构造函数调用" << endl;
    m_Age = p.m_Age;
    // m_Height = p.m_Height; //编译器默认实现就是这行代码，默认执行的是浅拷贝
    // 浅拷贝带来的问题就是堆区的内存重复释放

    // 深拷贝操作，在堆区自己创建一份内存
    m_Height = new int(*p.m_Height);
  }

  ~Person()
  {
    // 析构代码，将堆区开辟数据做释放操作
    cout << "Person的析构函数调用" << endl;
    if (m_Height != NULL)
    {
      delete m_Height; // 释放堆区数据
    }
  }
  int m_Age;
  int *m_Height;
};

void test01()
{
  Person p1(18, 160);

  cout << "p1的年龄为：" << p1.m_Age << "身高为：" << *p1.m_Height << endl; // 指针通过解引用获得数据

  Person p2(p1);

  cout << "p2的年龄为：" << p2.m_Age << "身高为：" << *p2.m_Height << endl;
}

int main()
{
  test01();
  return 0;
}