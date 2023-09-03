#include <iostream>
#include <string>
using namespace std;

void test01()
{
  string str = "hello";
  str.insert(1, "111"); // 在1号位置插入111
  cout << "str = " << str << endl;

  str.erase(1, 3); // 从1号位置开始删除3个字符
  cout << "str = " << str << endl;
}

int main(int argc, char const *argv[])
{
  test01();
  return 0;
}
