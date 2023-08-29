#include <iostream>
using namespace std;
#include <string>

// 打印输出类
class Base1
{
public:
  int m_A;

protected:
  int m_B;

private:
  int m_C;
};

// 公共继承
class Son1 : public Base1
{
public:
  void func()
  {
    m_A = 10; // 父类中的公共权限成员 到子类中依然是公共权限
    m_B = 10; // 父类中的保护权限成员 到子类中依然是保护权限
    // m_C = 10; //父类中的私有权限成员 子类访问不到
  }
};

void test01()
{
  Son1 s1;
  s1.m_A = 100; // 公共权限，类内能访问，类外也能访问
  // s1.m_B = 100;  //保护权限，类内能访问，类外不能访问
}

// 保护继承
class Son2 : protected Base1
{
public:
  void func()
  {
    m_A = 10; // 父类中的公共权限成员 到子类中变为保护权限
    m_B = 10; // 父类中的保护权限成员 到子类中依然是保护权限
    // m_C = 10; //父类中的私有权限成员 子类访问不到
  }
};

void test02()
{
  Son2 s2;
  // s2.m_A = 100;  //保护权限，类内能访问，类外不能访问
  // s2.m_B = 100;  //保护权限，类内能访问，类外不能访问
}

// 私有继承
class Son3 : private Base1
{
public:
  void func()
  {
    m_A = 10; // 父类中的公共权限成员 到子类中变为私有权限
    m_B = 10; // 父类中的保护权限成员 到子类中变为私有权限
    // m_C = 10; //父类中的私有权限成员 子类访问不到
  }
};

void test03()
{
  Son3 s3;
  // s3.m_A = 100;  //私有权限，类内能访问，类外不能访问
  // s3.m_B = 100;  //私有权限，类内能访问，类外不能访问
}

int main()
{

  return 0;
}