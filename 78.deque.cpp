#include <iostream>
using namespace std;
#include <deque>

// deque容器 构造函数

void printDeuque(const deque<int> &d) // const 防止进行写操作，只能进行读
{
  for (auto it = d.begin(); it != d.end(); it++) // 表示只读迭代器
  {
    //*it = 100;   const使得当进行写操作时，会报错，会提示，避免了进行修改操作
    cout << *it << " ";
  }
  cout << endl;
}

void test01()
{
  deque<int> d1; // 无参构造函数

  for (int i = 0; i < 10; i++)
  {
    d1.push_back(i);
  }
  printDeuque(d1);

  // 区间的方式构造
  deque<int> d2(d1.begin(), d1.end());
  printDeuque(d2);

  // n个值的方式构造
  deque<int> d3(10, 100);
  printDeuque(d3);

  // 拷贝构造
  deque<int> d4(d3);
  printDeuque(d4);
}

int main()
{
  test01();

  // system("pause");

  return 0;
}