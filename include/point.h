// 这是point.h头文件

#pragma once         // 防止头文件重复包含，防止头文件冲突
#include <iostream>  //标准输入输出
using namespace std; // 标准命名空间

// 只要函数声明、变量声明
// 成员函数只需要声明就好了，末尾有分号。
class Point
{
public:
  // 设置x
  void setX(int x);

  // 获取x
  int getX();

  // 设置y
  void setY(int y);

  // 获取y
  int getY();

private:
  int m_X;
  int m_Y;
};