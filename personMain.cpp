#include <iostream>
using namespace std;
#include "./include/person.h"
#include "./source/person.cpp"

void test01()
{
  Person<string, int> p("Jerry", 18);
  p.showPerson();
}

int main()
{
  test01();

  // system("pause");

  return 0;
}