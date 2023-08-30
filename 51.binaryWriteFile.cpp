#include <iostream>
using namespace std;
#include <fstream>

// 二进制文件 写文件

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

  // 2、创建流文件
  ofstream ofs;

  // 3、打开文件
  ofs.open("person.txt", ios::out | ios::binary); // 二进制的方式写文件

  // ofstream  ofs.open("person.txt",ios::out | ios::binary)  也可以两步合成一步

  // 4、写文件
  Person p = {"张三", 18};
  ofs.write((const char *)&p, sizeof(Person)); // 对p取地址，然后强转为常量指针

  // 5、关闭文件
  ofs.close();
}

int main()
{
  test01();

  // system("pause");

  return 0;
}