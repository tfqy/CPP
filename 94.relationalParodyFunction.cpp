#include <iostream>
using namespace std;
#include <algorithm>
#include <functional> //内建函数对象头文件
#include <vector>


// 1.template<classT>boolequalo<T>//等于
// 2.template<classT>boolnotequalo<T>//不等于
// 3.template<>classT>boolgreater<T>//大于
// 4.template<classT>boolgreaterqual<T>//庆于等于
// 5.template<classT>boolless<T>//小于
// 6.template<classT>boolless qual<T>//小于等于

// 内建函数对象 关系仿函数
// 大于 greater
class MyCompare
{
  bool operator()(int v1, int v2)
  {
    return v1 > v2;
  }
};

void test01()
{
  vector<int> v;

  v.push_back(10);
  v.push_back(20);
  v.push_back(30);
  v.push_back(40);
  v.push_back(50);

  for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;

  // 降序

  // 方式一：
  // sort(v.begin(), v.end(), MyCompare());

  // 方式二：
  sort(v.begin(), v.end(), greater<int>()); // greater<int>()为编译器给提供的函数对象，为内建的函数对象

  for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
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