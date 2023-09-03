#include <iostream>
using namespace std;
#include <vector>

// vector容器的容量和大小操作

void printVector(vector<int> &v)
{
  for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
  {
    cout << *it << "";
  }
  cout << endl;
}

void test01()
{
  vector<int> v1;
  for (int i = 0; i < 10; i++)
  {
    v1.push_back(i);
  }
  printVector(v1);

  if (v1.empty()) // 为真 代表容器为空
  {
    cout << "v1为空" << endl;
  }
  else
  {
    cout << "v1不为空：" << endl;
    cout << "capacity容量：" << v1.capacity() << endl;
    cout << "v1的大小为：" << v1.size() << endl;

    // 重新指定大小
    v1.resize(15); // 如果重新指定的比原来长了，默认用0填充新的位置
    printVector(v1);

    v1.resize(20, 100); // 利用重载版本，参数2可以指定默认填充值
    printVector(v1);
    cout << "capacity容量：" << v1.capacity() << endl;

    v1.resize(5); // 如果重新指定的比原来短了，超出的部分会删除掉
    printVector(v1);
    cout << "capacity容量：" << v1.capacity() << endl;
  }
}

int main()
{
  test01();

  // system("pause");

  return 0;
}