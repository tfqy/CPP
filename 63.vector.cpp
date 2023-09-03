#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> &v)
{
  for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;
}

void test01()
{
  vector<int> v1; // 默认构造
  for (int i = 0; i < 10; i++)
  {
    v1.push_back(i);
  }
  printVector(v1);

  // 通过区间方式构造
  vector<int> v2(v1.begin(), v1.end());
  printVector(v2);

  // n个elem方式构造
  vector<int> v3(10, 100);
  printVector(v3);

  // 拷贝构造
  vector<int> v4(v3);
  printVector(v4);
}

void myPrint(int val)
{
  cout << val << endl;
}

void test02()
{
  // 创建一个vector容器，数组
  vector<int> v; // 容器中的数据类型为int

  // 向容器中插入数据
  v.push_back(10);
  v.push_back(20);
  v.push_back(30);
  v.push_back(40);

  // 通过迭代器访问容器中的数据
  vector<int>::iterator itBegin = v.begin(); // 起始迭代器itBegin  指向容器中第一个元素的位置
  vector<int>::iterator itEnd = v.end();     // 结束迭代器itEnd 指向容器中最后一个元素的下一个位置

  // 第一种遍历方式
  while (itBegin != itEnd)
  {
    cout << *itBegin << endl; // 类似指针，解引用，取出值
    itBegin++;                // 往后偏移
  }

  // 第二种遍历方式
  for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
  {
    cout << *it << endl;
  }

  // 第三种遍历方式，利用STL提供遍历算法
  for_each(v.begin(), v.end(), myPrint); // 要用STL中的标准算法，就要提供标准算法的头文件
}

int main()
{
  test01();
  test02();
  return 0;
}