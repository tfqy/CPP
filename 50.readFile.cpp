#include <iostream>
using namespace std;
#include <fstream>
#include <string>

// 文本文件 读文件

void test01()
{
  // 1、包含头文件 fstream

  // 2、创建流文件

  ifstream ifs; // 创建流对象

  // 3、打开文件，并且判断是否打开成功
  ifs.open("test.txt", ios::in);

  if (!ifs.is_open())
  {
    cout << "文件打开失败" << endl;
    return;
  }

  // 4、读数据

  /*
  //第一种
  char buf[1024] = { 0 };  //字符数组初始化全为0
  while (ifs >> buf)     //一行一行数据读，存到buf里，当读不到数据的时候，返回False，退出循环
  {
      cout << buf << endl;
  }
  */

  /*
  //第二种
  char buf[1024] = { 0 };
  while (ifs.getline(buf, sizeof(buf)))  //第一个参数为数据放到哪里(地址)，第二个参数为最多要读多少个字节数
  {
      cout << buf << endl;
  }
  */

  /*
  //第三种
  string buf;
  while (getline(ifs,buf))
  {
      cout << buf << endl;
  }
  */
 

  // 第四种
  char c;
  while ((c = ifs.get()) != EOF) // 每一次读取一个字符,字符放入c
  {                              // EOF表示读取到文件尾
    cout << c;
  }

  // 5、关闭文件
  ifs.close();
}

int main()
{
  test01();

  // system("pause");

  return 0;
}