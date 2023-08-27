#pragma once
#include <iostream>  //标准输出流
using namespace std; // 标准命名空间
#include "Point.h"   //一个类中用到另一个类，把另一个类包含的头文件包含进来

// 圆类
class Circle
{
public:
  // 设置半径
  void setR(int r);

  // 获取半径
  int getR();

  // 设置圆心
  void setCenter(Point center);

  // 获取圆心
  Point getCenter();

private:
  int m_R;        // 半径
  Point m_Center; // 圆心   //在类中可以让另一个类 作为本类中的成员
};