#include <iostream>
using namespace std;

// 打印输出类
class BasePage
{
public:
  void header()
  {
    cout << "首页、公开课、登陆、注册...(公共头部)" << endl;
  }
  void footer()
  {
    cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
  }
  void left()
  {
    cout << "Java、Python、C++....(公共分类列表)" << endl;
  }
};

// 继承的好处：减少重复代码
// 语法：class 子类：继承方式 父类
// 子类 也称为 派生类
// 父类 也称为 基类

// Java页面
class Java : public BasePage // 继承了BasePage，把BasePage里面的内容全部拿到手了
{
public:
  void content()
  {
    cout << "Java学科视频" << endl;
  }
};

// Python页面
class Python : public BasePage // 继承了BasePage，把BasePage里面的内容全部拿到手了
{
public:
  void content()
  {
    cout << "Python学科视频" << endl;
  }
};

// C++页面
class CPP : public BasePage // 继承了BasePage，把BasePage里面的内容全部拿到手了
{
public:
  void content()
  {
    cout << "CPP学科视频" << endl;
  }
};

void test01()
{
  cout << "Java下载视频页面如下：" << endl;
  Java ja;
  ja.header();
  ja.footer();
  ja.left();
  ja.content();

  cout << "........................" << endl;
  cout << "Python下载视频页面如下：" << endl;
  Python py;
  py.header();
  py.footer();
  py.left();
  py.content();

  cout << "........................" << endl;
  cout << "C++下载视频页面如下：" << endl;
  CPP cpp;
  cpp.header();
  cpp.footer();
  cpp.left();
  cpp.content();
}

int main()
{
  test01();

  return 0;
}