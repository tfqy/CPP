#include <iostream>
using namespace std;
#include <string>

// string查找和替换

/*
//查找str第一次出现位置，从pos开始查找
1. int find(const string& str, int pos = 0) const;
// 查找s第一次出现位置，从pos开始查找
2. int find(const char* s, int pos = 0) const;
//从pos位置查找s的前n个字符第一次位置
3. int find(const char* s, int pos, int n) const;
//查找字符c第一次出现位置
4. int find(const char c, int pos = 0) const;
//查找str最后一次位置，从pos开始查找
5. int rfind(const string& str, int pos = npos) const;
 //查找s最后一次出现位置，从pos开始查找
6. int rfind(const char* s, int pos = npos) const;
 //从pos查找s的前n个字符最后一次位置
7. int rfind(const char* s, int pos, int n) const;
 //查找字符c最后一次出现位置
8. int rfind(const char c, int pos = 0) const;
//替换从pos开始n个字符为字符串str
9. string& replace(int pos, int n, const string& str) const;
//替换从pos开始的n个字符为s
10. string& replace(int pos, int n, const string* s) const;
*/

// 1、查找
void test01()
{
  string str1 = "abcdefgde";
  int pos = str1.find("de"); // 从零开始索引，返回值为d出现的位置"3"，若找不到子字符串，就返回-1
  if (pos == -1)
  {
    cout << "未找到字符串 pos = " << pos << endl;
  }
  else
  {
    cout << "找到字符串 pos = " << pos << endl;
  }

  // rfind
  pos = str1.rfind("de"); // rfind是从右往左查找，find是从左往右查找

  cout << "pos=" << pos << endl;
}

void test02()
{
  string str1 = "abcdefg";

  str1.replace(1, 3, "1111"); 
  // 从 "1" 号位置起，"1111"有四个字符
  // 所以变为4个字符替换成 "1111"，而不是出现3个字符替换成"111"

  cout << "str1= " << str1 << endl;
}

int main()
{
  test01();
  test02();

  // system("pause");

  return 0;
}