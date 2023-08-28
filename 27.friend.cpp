#include <iostream>
using namespace std;

// 建筑物类
class Buiding
{
  // goodfriend全局函数是Buiding类好朋友，可以访问Buiding中私有成员
  friend void goodfriend(Buiding *buiding);

public:
  Buiding() // 构造函数 赋初值
  {
    m_SittingRoom = "客厅";
    m_BedRoom = "卧室";
  }

public:
  string m_SittingRoom; // 客厅

private:
  string m_BedRoom;
};

// 全局函数
void goodfriend(Buiding *buiding)
{
  cout << "好基友全局函数 正在访问：" << buiding->m_SittingRoom << endl;
  cout << "好基友全局函数 正在访问：" << buiding->m_BedRoom << endl;
}

// void otherfriend(Buiding *buiding)
// {
//   cout << "好基友全局函数 正在访问：" << buiding->m_SittingRoom << endl;
//   cout << "好基友全局函数 正在访问：" << buiding->m_BedRoom << endl;
// }

void test01()
{
  Buiding building;
  goodfriend(&building);
}

int main()
{
  test01();

  return 0;
}