#include <iostream>
using namespace std;
#include <set>

// set容器排序

class MyCompare
{
public:
  bool operator()(int v1, int v2) const // 第一个()表示重载符号，第二个()为参数列表
  {
    return v1 > v2;
  }
};

void test01()
{
  set<int> s1; // set容器默认从小到大排序

  s1.insert(10);
  s1.insert(40);
  s1.insert(50);
  s1.insert(20);
  s1.insert(30);

  for (set<int>::iterator it = s1.begin(); it != s1.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;

  // 指定排序规则为从大到小

  set<int, MyCompare> s2; // 此时指定set容器的排序规则为MyCompare，MyCompare()

  s2.insert(10);
  s2.insert(40);
  s2.insert(50);
  s2.insert(20);
  s2.insert(30);

  for (auto it = s2.begin(); it != s2.end(); it++)
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