#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  //const���α���
  // const����ָ���ָ��ָ��ָ���ֵ���ܸı�
  int a = 10, b = 5;
  const int *p1 = &a;
  // *p1 = 20; // error: assignment of read-only location ��* p1��
  p1 = &b;
  cout << *p1 << endl;

  //const����ָ�룬ָ��ָ���ֵ���Ըı�
  int *const p2 = &a;
  *p2 = 20;
  // p2 = &b; // error: assignment of read-only variable ��p2��
  cout << *p2 << endl;

  //const������ָ�룬������ָ��ָ���ֵ
  const int *const p3 = &a;
  // *p3 = 20; // error: assignment of read-only location ��* p3��
  // p3 = &b; // error: assignment of read-only variable ��p3��
  cout << *p3 << endl;
  return 0;
}
