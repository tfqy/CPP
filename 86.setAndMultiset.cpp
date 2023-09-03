#include <iostream>
using namespace std;
#include <set>

// set容器 和 mutiset容器 的区别

void printset(const set<int> &L)
{
  for (set<int>::const_iterator it = L.begin(); it != L.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;
}

void test01()
{
  set<int> s1;

  pair<set<int>::iterator, bool> ret = s1.insert(10); // s.insert(数)返回的是pair类型，第一个数为迭代器，第二个数为布尔类型
  if (ret.second)
  {
    cout << "第一次插入成功" << endl;
  }
  else
  {
    cout << "第一次插入失败" << endl;
  }

  ret = s1.insert(10); // set不允许插入重复的值，当插入重复的值，返回的第二个参数为False，然后不会插入进去

  if (ret.second)
  {
    cout << "第二次插入成功" << endl;
  }
  else
  {
    cout << "第二次插入失败" << endl;
  }

  multiset<int> ms;
  // 运行插入重复值
  ms.insert(10);
  ms.insert(10);
  ms.insert(10);

  for (multiset<int>::const_iterator it = ms.begin(); it != ms.end(); it++)
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