#include <iostream>
using namespace std;
#include <algorithm>
#include <functional> //内建函数对象头文件
#include <vector>

// 1.template<classT>boollogicaland<T>//逻辑与
// 2.template<ca.ssT>boollogicalor<T>//逻辑或
// 3.template<classT>boollogicalnot<T>//逻辑非

// 内建函数对象 逻辑仿函数
// 逻辑非 logical_not

void test01()
{
  vector<bool> v;

  v.push_back(true);
  v.push_back(false);
  v.push_back(true);
  v.push_back(true);
  v.push_back(false);

  for (vector<bool>::iterator it = v.begin(); it != v.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;

  // 利用逻辑非 将容器v  搬运到 容器v2中，并执行取反操作
  vector<bool> v2;
  v2.resize(v.size()); // 目标容器要提前开辟一个空间

  transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());
   // 第一个参数：原容器起始迭代器，
  //  第二个参数：原容器终止迭代器，
  //  第三个参数：目标容器起始迭代器

  for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;
}

int main()
{

  test01();

  // system("pause");

  return 0;
}