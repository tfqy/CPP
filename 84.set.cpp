#include <iostream>
using namespace std;
#include <set>

// set容器  构造和赋值

void printset(const set<int> &L)
{
  for (set<int>::const_iterator it = L.begin(); it != L.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;
}

bool myCopare(int v1, int v2)
{
  // 降序 就让第一个数 大于第二个数为真
  return v1 > v2;
}

void test01()
{
  set<int> s1;

  // 插入数据  只有insert方式
  s1.insert(10);
  s1.insert(40);
  s1.insert(30);
  s1.insert(20);
  s1.insert(30);

  // 遍历容器
  // set容器特点：所有元素插入时候自动被排序
  // set容器不允许插入重复值
  printset(s1);

  // 拷贝构造
  set<int> s2(s1);
  printset(s2);

  // 赋值
  set<int> s3;
  s3 = s2;
  printset(s3);
}

int main()
{

  test01();

  // system("pause");

  return 0;
}