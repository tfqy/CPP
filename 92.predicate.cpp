#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

// 仿函数 返回值类型是bool数据类型，称为谓词
// 一元谓词
class GreaterFive
{
public:
  bool operator()(int val)
  {
    return val > 5;
  }
};

// 仿函数 返回值类型是bool数据类型，称为谓词
// 二元谓词
class MyCompare
{
public:
  bool operator()(int val1, int val2)
  {
    return val1 > val2;
  }
};

void test01()
{
  vector<int> v;
  for (int i = 0; i < 10; i++)
  {
    v.push_back(i);
  }

  // 查找容器中，有没有大于5的数字
  // GreaterFive() 匿名函数对象
  vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
  if (it == v.end())
  {
    cout << "未找到" << endl;
  }
  else
  {
    cout << "找到大于5的数字为：" << *it << endl;
  }
}

void test02()
{
  vector<int> v;
  v.push_back(10);
  v.push_back(40);
  v.push_back(50);
  v.push_back(20);
  v.push_back(30);

  sort(v.begin(), v.end());
  for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;

  // 使用函数对象，改变算法策略，变为排序规则为从大到小
  sort(v.begin(), v.end(), MyCompare()); // MyCompare()为函数对象，是匿名函数

  cout << "----" << endl;
  for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;
}

int main()
{
  test01();
  test02();

  // system("pause");

  return 0;
}