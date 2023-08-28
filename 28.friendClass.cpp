#include <iostream>
using namespace std;

// 类做友元
class Building; // 声明

class GoodGay
{
public:
  GoodGay();

  void visit(); // 参观函数 访问Building中的属性

  Building *building;
};

class Building
{
  // GoodGay类是本类的好朋友，可以访问本类的私有成员
  friend class GoodGay;

public:
  Building();

public:
  string m_SittingRoom; // 客厅
private:
  string m_BedRoom; // 卧室
};

// 类外写成员函数，写类名的作用域

// Building构造函数
Building::Building()
{
  m_SittingRoom = "客厅";
  m_BedRoom = "卧室";
}

// GoodGay构造函数
GoodGay::GoodGay()
{
  // 创建建筑物对象
  building = new Building; // 这里会调用Building的构造函数
                           // new是创建什么样的数据类型，就返回什么样的数据类型的指针
}

void GoodGay::visit()
{
  cout << "好基友类正在访问：" << building->m_SittingRoom << endl;

  cout << "好基友类正在访问：" << building->m_BedRoom << endl;
}

void test01()
{
  GoodGay gg; // 创建一个GoodGay的对象，会调用GoodGay构造函数，会创建一个building，然后调用building构造函数
  gg.visit();
}

int main()
{
  test01();
  return 0;
}