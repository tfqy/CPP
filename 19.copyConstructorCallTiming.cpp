#include <iostream>
using namespace std;

// 拷贝构造函数调用时机

// 1、使用一个已经创建完毕的对象来初始化一个新对象

// 2、值传递的方式给函数参数传值

// 3、值方式返回局部对象

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

// 1、使用一个已经创建完毕的对象来初始化一个新对象
void test01()
{
  Person p1(20);
  Person p2(p1);

  cout << "p2的年龄为：" << p2.m_Age << endl;
}

// 2、值传递的方式给函数参数传值
void doWork(Person p)
{
}

void test02()
{
  Person p;
  doWork(p); // 实参传给形参的时候，会调用拷贝构造函数，这个是值传递，是一个临时的副本
             // 拷贝出去的p和原来的p 不是一个p
}

// 3、值方式返回局部对象
Person doWork2() // 返回值类型为Person对象
{
  Person p1; // 局部对象
  cout << (int *)&p1 << endl;
  return p1; // 以值的方式返回一个拷贝的对象给外部，拷贝出一个对象p1'与原对象p1不一样,调用拷贝构造函数

  // 程序运行结束，释放原p1，调用析构函数
}

void test03()
{
  Person p = doWork2(); // 这里没有调用拷贝构造函数，直接用p接收拷贝对象p1’
  cout << (int *)&p << endl;

  // 程序运行结束，释放拷贝的对象p1',调用析构函数
}

int main()
{
  // test01();
  // test02();
  test03();
  return 0;
}