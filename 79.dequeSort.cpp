#include <iostream>
using namespace std;
#include <algorithm> //标准算法头文件
#include <deque>

// deque容器 排序操作

void printDeuque(const deque<int> &d)
{
  for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) // 表示只读迭代器
  {
    cout << *it << " ";
  }
  cout << endl;
}

void test01()
{
  deque<int> d1;

  // 尾插
  d1.push_back(10);
  d1.push_back(20);
  d1.push_back(30);

  // 头插
  d1.push_front(100);
  d1.push_front(200);
  d1.push_front(300);

  printDeuque(d1);

  // 排序  默认排序规则  从小到大 升序
  // 对于支持随机访问的迭代器的容器，都可以利用sort算法直接对其进行排序
  // vector容器也可以利用sort进行排序
  sort(d1.begin(), d1.end());
  cout << "排序后：" << endl;
  printDeuque(d1);
}

int main()
{
  test01();

  // system("pause");

  return 0;
}