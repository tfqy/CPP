#include <iostream>
using namespace std;
#include <vector>

// vector容器 预留空间

void test01()
{

  vector<int> v;

  int num = 0; // 统计开辟次数

  int *p = NULL;

  for (int i = 0; i < 100000; i++)
  {
    v.push_back(i);

    if (p != &v[0]) // 一开始指针不指向容量首地址，所以让指针指向容量首地址，开辟内存次数加1
    {
      p = &v[0];
      num++; // 由于容量不够，会再次开辟一段容量更大的内存空间，原小容量的内存空间被释放
    }
  }

  cout << "num：" << num << endl;
}

void test02()
{

  vector<int> v;

  // 预留空间
  v.reserve(100000);

  int num = 0; // 统计开辟次数

  int *p = NULL;

  for (int i = 0; i < 100000; i++)
  {
    v.push_back(i);

    if (p != &v[0])
    {
      p = &v[0];
      num++;
    }
  }

  cout << "num：" << num << endl;
}

int main()
{
  test01();
  test02();

  // system("pause");

  return 0;
}