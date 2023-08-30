#include <iostream>
using namespace std;
#include <fstream>

// 二进制文件 读文件

class Person
{
public:
  char m_Name[64]; // 姓名
  int m_Age;       // 年龄
  // 写字符串的时候最好不要用C++的string，有可能出现问题，最好用C的数组写字符串，因为它底层是用C写的
};

void test01()
{
  // 1、包含头文件

  // 2、创建流对象
  ifstream ifs;

  // 3、打开文件
  ifs.open("person.txt", ios::in | ios::binary); // 二进制的方式读文件

  if (!ifs.is_open())
  {
    cout << "文件打开失败" << endl;
    return;
  }

  // 4、写文件
  Person p;
  ifs.read((char *)&p, sizeof(Person));

  cout << "姓名：" << p.m_Name << " 年龄：" << p.m_Name << endl;

  // 5、关闭文件
  ifs.close();
}

int main()
{
  test01();

  // system("pause");

  return 0;
}