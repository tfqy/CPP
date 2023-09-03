#include <iostream>
using namespace std;
#include <list>

// list容器赋值和交换

void printList(const list<int> &L)
{
  for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;
}

void test01()
{
  // 创建list容器
  list<int> L1; // 默认构造

  // 添加数据
  L1.push_back(10);
  L1.push_back(20);
  L1.push_back(30);
  L1.push_back(40);

  // 遍历容器
  printList(L1);

  // 判断容器是否为空
  if (L1.empty())
  {
    cout << "L1为空" << endl;
  }
  else
  {
    cout << "L1不为空：" << endl;
    cout << "L1的元素个数为：" << L1.size() << endl;
  }

  cout << "第一个元素为：" << L1.front() << endl;
  cout << "最后一个元素为：" << L1.back() << endl;

  // 重新指定大小
  L1.resize(10, 10000);
  printList(L1);

  L1.resize(2);
  printList(L1);

  L1.push_front(0);
  printList(L1);

  L1.pop_front();
  printList(L1);

  L1.insert(L1.begin(), 100);
  printList(L1);
  auto it = L1.begin();
  it++;
  // 因为list是双向的，所以支持递增、递减++、--的操作
  // 但是不支持it = it+1;it = it+2;....，即不支持这样的随机访问

  L1.erase(it);
  cout << "删除后：" << endl;
  printList(L1);

  L1.remove(20);
  printList(L1);

  L1.clear();
  printList(L1);
}

int main()
{

  test01();

  // system("pause");

  return 0;
}