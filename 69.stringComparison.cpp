#include <iostream>
using namespace std;
#include <string>

// 字符串比较

// 1、查找
void test01()
{
  string str1 = "hello";
  string str2 = "hello";

  // compar常用于比较两个字符串相等或不相等，判断谁大谁小的意义并不是很大
  if (str1.compare(str2) == 0)
  {
    cout << "str1 等于 str2" << endl;
  }
  else if (str1.compare(str2) > 0)
  {
    cout << "str1 大于 str2" << endl;
  }
  else
  {
    cout << "str1 小于 str2" << endl;
  }
}

int main()
{
  test01();

  // system("pause");

  return 0;
}