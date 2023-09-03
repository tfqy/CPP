#include <iostream>
using namespace std;
#include <string>

// string赋值操作

/*
1. string& operator+=(const char* str);  //重载+=操作符
2. string& operator+=(const char c); //重载+=操作符
3. string& operator+=(const string& str); //重载+=操作符
4. string& append+=(const char* s); //把字符串s连接到当前字符串结尾
5. string& append+=(const char* s, int n); //把字符串s的前n个字符连接到当前字符串结尾
6. string& append+=(const string &s); //同operator+=(const string& str)
7. string& append+=(const char &s, int pos, int n); //字符串s从pos开始的n个字符连接到字符串结尾
*/

void test01()
{
  string str1 = "我"; // 字符串初始化
  str1 += "爱玩游戏";
  cout << "str1 = " << str1 << endl;

  str1 += ':'; // 追加一个字符
  cout << "str1 = " << str1 << endl;

  string str2 = " LOL DNF";
  str1 += str2; // 追加字符串
  cout << "str1 = " << str1 << endl;

  string str3 = "I";
  str3.append(" love ");
  cout << "str3 = " << str3 << endl;

  str3.append("game abcde ", 4); // 只把字符串的前4个拼接过去
  cout << "str3 = " << str3 << endl;

  str3.append(str2);
  cout << "str3 = " << str3 << endl;

  str3.append(str2, 0, 4); // 只截取到LoL，参数2表示从哪个位置开始截取，参数3表示截取字符个数
  cout << "str3 = " << str3 << endl;
}

int main()
{
  test01();

  // system("pause");

  return 0;
}