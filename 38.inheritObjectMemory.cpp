#include <iostream>
using namespace std;
#include <string>

// 继承中的对象模型

class Base
{
public:
  int m_A;

protected:
  int m_B;

private:
  int m_C;
};

// 公共继承
class Son : public Base
{
  int m_D;
};

// 利用开发人员命令提示工具查看对象模型
// 跳转盘符→F:
// 跳转文件路径→cd 具体路径下
// 查看命令
// cl /d1 reportSingleClassLayout查看的类名 "文件名"

void test01()
{
  // 父类中所有非静态成员属性都会被子类继承下去
  // 父类中私有成员属性 是被编译器给隐藏了，因此是访问不到，但是确实被继承下去了
  cout << "size of Son =" << sizeof(Son) << endl; // 16个字节，父类3个int一个12个字节，字节1个int4个字节
}

int main()
{
  test01();

  // system("pause");

  return 0;
}