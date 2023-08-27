// 这是point.cpp源文件
#include "../include/point.h"

// 定义函数时，要加上作用域，"双冒号::"表示Point作用域下的函数
void Point::setX(int x)
{
  m_X = x;
}
// 获取x
int Point::getX()
{
  return m_X;
}
// 设置y
void Point::setY(int y)
{
  m_Y = y;
}
// 获取y
int Point::getY()
{
  return m_Y;
}