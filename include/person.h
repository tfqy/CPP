// person.h 文件
#pragma once // 表示防止头文件重复包含
#include <iostream>
using namespace std;
#include <string>

template <class T1, class T2>
class Person
{
public:
  Person(T1 name, T2 age);

  void showPerson();

  T1 m_Name;
  T2 m_Age;
};