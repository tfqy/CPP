#include <iostream>
using namespace std;

// 类模板与继承
template <class T>
class Base
{
  T m;
};

// class Son :public Base // 报错，必须要知道父类中T类型，才能继承给子类，因为编译器不知道给子类多少个内存空间，如果T是int型给1个字节，但是T是double型给4个字节
class Son : public Base<int>
{
};

void test01()
{
  Son s1;
}

// 如果想灵活指定父类中T类型，子类也需要变类模板
template <class T1, class T2>
class Son2 : public Base<T2> // T2给了父类
{
public:
  Son2()
  {
    cout << "T1的类型为：" << typeid(T1).name() << endl;
    cout << "T2的类型为：" << typeid(T2).name() << endl;
  }
  T1 obj; // T1 给了子类
};

void test02()
{
  Son2<int, char> S2; // T1为int，即obj为int型，T2为char型，即m为char型
}
int main()
{
  test01();
  test02();

  // system("pause");

  return 0;
}