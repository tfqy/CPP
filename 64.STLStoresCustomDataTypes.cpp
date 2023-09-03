#include <iostream>
using namespace std;
#include <string>
#include <vector> //STL中每个容器要使用，都要包含对应的头文件

// vector容器中存放自定义数据类型
class Person
{
public:
  Person(string name, int age)
  {
    this->m_Name = name;
    this->m_Age = age;
  }
  string m_Name;
  int m_Age;
};

void test01()
{
  vector<Person> v; // 容器中放的是Person的数据类型

  Person p1("aaa", 10);
  Person p2("bbb", 20);
  Person p3("ccc", 30);
  Person p4("ddd", 40);
  Person p5("eee", 50);

  // 向容器中添加数据
  v.push_back(p1);
  v.push_back(p2);
  v.push_back(p3);
  v.push_back(p4);
  v.push_back(p5);

  // 遍历容器中的数据
  for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
  {
    cout << "姓名：" << (*it).m_Name << " 年龄：" << (*it).m_Age << endl; //<>是什么类型，*it就是什么类型
                                                                          // 第二种拿到属性的方法，由于已知it是个指针，所以也可以通过it->m_Name拿到属性
    cout << "姓名：" << it->m_Name << " 年龄：" << it->m_Age << endl;
  }
}

// 存放自定义数据类型 指针
void test02()
{
  vector<Person *> v;

  Person p1("aaa", 10);
  Person p2("bbb", 20);
  Person p3("ccc", 30);
  Person p4("ddd", 40);
  Person p5("eee", 50);

  // 向容器中添加数据
  v.push_back(&p1);
  v.push_back(&p2);
  v.push_back(&p3);
  v.push_back(&p4);
  v.push_back(&p5);

  // 遍历容器
  for (vector<Person *>::iterator it = v.begin(); it != v.end(); it++)
  {
    cout << "姓名：" << (*it)->m_Name << " 年龄：" << (*it)->m_Age << endl;
  }
}

int main()
{
  test01();
  test02();

  system("pause");

  return 0;
}