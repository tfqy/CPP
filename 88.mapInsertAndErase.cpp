#include <iostream>
using namespace std;
#include <map>

void printMap(map<int, int> &m)
{
  for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
  {
    cout << "key = " << it->first << " value = " << it->second << endl;
  }
  cout << endl;
}

void test01()
{
  // 创建map容器
  map<int, int> m;

  // 第一种：
  m.insert(pair<int, int>(1, 10));

  // 第二种：
  m.insert(make_pair(2, 10));

  // 第三种：
  m.insert(map<int, int>::value_type(3, 30)); // map容器下为"值"为(3,30)

  // 第四种：
  m[4] = 40;

  cout << m[5] << endl; // 由于没有m[5]没有数，它会自动创建出一个value为0的数
  cout << m[4] << endl; // 不建议用[]插入，但是可以利用key访问到value。

  printMap(m);

  // 删除
  m.erase(m.begin());
  printMap(m);

  m.erase(3); // 安装key删除
  printMap(m);

  // 清空方式一
  m.erase(m.begin(), m.end());
  // 清空方式二
  m.clear();

  printMap(m);
}

int main()
{
  test01();

  // system("pause");

  return 0;
}