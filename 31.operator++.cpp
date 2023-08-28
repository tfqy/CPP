#include <iostream>
using namespace std;

// 重载递增运算符

class MyInteger
{
  friend ostream &operator<<(ostream &cout, MyInteger myint);

public:
  MyInteger()
  {
    m_Num = 0;
  }

  // 重载前置++运算符,返回引用是为了一直对一个数据进行递增操作,而返回值并不是一直对一个数据进行递增操作
  MyInteger &operator++()
  {
    // 先进行++运算
    m_Num++;

    // 再将自身做一个返回
    return *this; // 把自身做一个返回
  }

  // 重载后置++运算符 int代表占位参数，可以用于区分前置和后置递增
  // 后置递增不能返回引用，因为temp是局部变量，如果返回temp，当程序运行完后变量就释放了，再调用temp就是非法操作了
  MyInteger operator++(int)
  {
    // 先记录当时结果
    MyInteger temp = *this;
    // 后 递增
    m_Num++;
    // 最后将记录结果做返回
    return temp;
  }

private:
  int m_Num;
};

// 只能利用全局函数重载左移运算符
ostream &operator<<(ostream &cout, MyInteger myint) // 本质 operator << (cout , p) , 简化 cout << p
                                                    // cout是别名，这里可以取out、kn...
                                                    // cout为ostream输出流数据类型
{
  cout << myint.m_Num;

  return cout;
}

void test01()
{
  MyInteger myint;

  cout << ++(++myint) << endl;
  cout << myint << endl;
}

void test02()
{
  MyInteger myint;

  cout << myint++ << endl;
  cout << myint << endl;
}

int main()
{
  test01();
  test02();

  /*
  int a = 0;
  cout << ++(++a) << endl; //运行结果为2
  cout << a << endl;       //运行结果为2，表示一直对一个数据进行递增
  */

  return 0;
}