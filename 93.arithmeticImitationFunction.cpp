#include <iostream>
using namespace std;
#include <functional> //内建函数对象头文件

// 1.template<classT>Tplus<T>//加法仿函数
// 2.template<classT>Tminus<T>//减法仿函数
// 3.template<classT>Tmultiplies<T>//乘法仿函数
// 4,template<classT>Tdivides<T>//除法仿函数
// 5.template<classT>Tmodulus<T>//取模仿函数
// 6.template<classT>Tnegate<T>//取反仿函数

// 内建函数对象 算术仿函数

// negate 一元仿函数 取反仿函数
void test01()
{
  negate<int> n;

  cout << n(50) << endl;
}

// plus 二元仿函数  加法
void test02()
{
  plus<int> p; // 写一个int就好了，不用写两个int，它默认是两个同类型的int相加

  cout << p(50, 60) << endl;
}

int main()
{

  test01();
  test02();

  system("pause");

  return 0;
}