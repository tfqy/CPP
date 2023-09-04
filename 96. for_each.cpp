#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

// 普通函数
void print01(int val)
{
  cout << val << " ";
}

// 仿函数
class print02
{
public:
  void operator()(int val)
  {
    cout << val << " ";
  }
};

void test01()
{
  vector<int> v;

  for (int i = 0; i < 10; i++)
  {
    v.push_back(i);
  }

  for_each(v.begin(), v.end(), print01); // 利用普通函数实现遍历操作,放入函数名即可
  cout << endl;

  for_each(v.begin(), v.end(), print02()); // 仿函数，放入匿名函数对象即可
  cout << endl;
}

int main()
{
  test01();

  // system("pause");

  return 0;
}