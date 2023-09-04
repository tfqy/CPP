// ① find           // 查找元素
// ② find_if       // 按条件查找元素
// ③ adjacent_find // 查找相邻重复元素
// ④ binary_search // 二分查找法
// ⑤ cout          // 统计元素个数
// ⑥ count_if      // 按条件统计元素个数
#include <iostream>
using namespace std;
#include <algorithm>
#include <string>
#include <vector>

// 查找 内置数据类型
void test01()
{
  vector<int> v;
  for (int i = 0; i < 10; i++)
  {
    v.push_back(i);
  }

  // 查找 容器中 是否有 5 这个元素
  vector<int>::iterator it = find(v.begin(), v.end(), 5);
  if (it == v.end())
  {
    cout << "没有找到！" << endl;
  }
  else
  {
    cout << "找到：" << *it << endl;
  }
}

class Person
{
public:
  Person(string name, int age)
  {
    this->m_Name = name;
    this->m_Age = age;
  }

  // 重载 == 让find底层知道如何对比person数据类型
  bool operator==(const Person &p)
  {
    if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
    {
      return true;
    }
    else
    {
      return false;
    }
  }

  string m_Name;
  int m_Age;
};

// 查找 自定义数据类型
void test02()
{
  vector<Person> v;
  // 创建数据
  Person p1("aaa", 10);
  Person p2("bbb", 20);
  Person p3("ccc", 30);
  Person p4("ddd", 40);

  // 放入到容器中
  v.push_back(p1);
  v.push_back(p2);
  v.push_back(p3);
  v.push_back(p4);

  Person pp("bbb", 20);

  vector<Person>::iterator it = find(v.begin(), v.end(), pp); // find找里面有没有pp这个对象
  if (it == v.end())
  {
    cout << "没有找到" << endl;
  }
  else
  {
    cout << "找到元素姓名：" << it->m_Name << " 年龄：" << it->m_Age << endl;
  }
}

int main()
{
  test01();

  test02();

  return 0;
}