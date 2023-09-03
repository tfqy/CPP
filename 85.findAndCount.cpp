#include <iostream>
using namespace std;
#include <set>

// set容器  查找和统计

void printset(const set<int> &L)
{
  for (auto it = L.begin(); it != L.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;
}

void test01()
{
  set<int> s1;

  // 插入数据  只有insert方式
  s1.insert(20);
  s1.insert(40);
  s1.insert(30);
  s1.insert(10);
  s1.insert(30);

  printset(s1);

  // 查找返回的是一个迭代器
  auto pos = s1.find(30);
  if (pos != s1.end())
  {
    cout << "找到元素：" << *pos << endl;
  }
  else
  {
    cout << "未找到元素" << endl;
  }
}

// 统计
void test02()
{
  set<int> s1;

  // 插入数据  只有insert方式
  s1.insert(20);
  s1.insert(40);
  s1.insert(30);
  s1.insert(10);
  s1.insert(30);

  int num = s1.count(30);
  // 对于set而言 统计结果要么是0 要么是1
  cout << "num = " << num << endl;
}

int main()
{

  test01();
  test02();

  // system("pause");

  return 0;
}