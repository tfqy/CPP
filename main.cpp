// 这个是主文件 .cpp文件

#include <iostream>
using namespace std;
#include "include/circle.h" //想用点类，就要包含点类的头文件
#include "include/point.h"  //想用圆类，就要包含点类的头文件
#include "source/circle.cpp"
#include "source/point.cpp"

// 判断点和圆关系
void isInCircle(Circle &c, Point &p)
{
  // 计算两点之间距离 平方
  int distance =
      (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
      (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY()); // c.getCenter()返回的是圆心点center类
                                                                             // 可以调用圆心点center类中的方法

  // 计算半径的平方
  int rDistance = c.getR() * c.getR();

  // 判断关系
  if (distance == rDistance)
  {
    cout << "点在圆上" << endl;
  }
  else if (distance > rDistance)
  {
    cout << "点在圆外" << endl;
  }
  else
  {
    cout << "点在圆内" << endl;
  }
}

int main()
{
  // 创建圆
  Circle c;
  c.setR(10);
  Point center;
  center.setX(10);     // 设置点的横坐标
  center.setY(0);      // 设置点的纵坐标
  c.setCenter(center); // 设置点类传入圆类

  // 创建点
  Point p;
  p.setX(10);
  p.setY(10);

  // 判断关系
  isInCircle(c, p);
  return 0;
}