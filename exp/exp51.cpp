#include <iostream>
#include <string>
using namespace std;

class XS
{
public:
  virtual void dispXM() = 0;
  virtual void dispXB() = 0;
  virtual void dispNL() = 0;
};

class CZS : public XS
{
public:
  CZS(string name, string gender, int age) : xm(name), xb(gender), nl(age) {}
  void dispXM() { cout << xm; }
  void dispXB() { cout << xb; }
  void dispNL() { cout << nl; }

private:
  string xm, xb;
  int nl;
};

class GZS : public XS
{
public:
  GZS(string name, string gender, int age) : xm(name), xb(gender), nl(age) {}
  void dispXM() { cout << xm; }
  void dispXB() { cout << xb; }
  void dispNL() { cout << nl; }

private:
  string xm, xb;
  int nl;
};

class DXS : public XS
{
public:
  DXS(string name, string gender, int age) : xm(name), xb(gender), nl(age) {}
  void dispXM() { cout << xm; }
  void dispXB() { cout << xb; }
  void dispNL() { cout << nl; }

private:
  string xm, xb;
  int nl;
};

int main()
{
  string name, gender;
  int age;

  // 输入初中生、高中生和大学生的信息
  cin >> name >> gender >> age;
  CZS cz(name, gender, age);
  cin >> name >> gender >> age;
  GZS gz(name, gender, age);
  cin >> name >> gender >> age;
  DXS dx(name, gender, age);

  // 用基类指针访问虚函数
  XS *p;
  p = &cz;
  p->dispXM();
  cout << " ";
  p->dispXB();
  cout << " ";
  p->dispNL();
  cout << endl;

  p = &gz;
  p->dispXM();
  cout << " ";
  p->dispXB();
  cout << " ";
  p->dispNL();
  cout << endl;

  p = &dx;
  p->dispXM();
  cout << " ";
  p->dispXB();
  cout << " ";
  p->dispNL();
  cout << endl;

  // 用基类引用访问虚函数
  XS &r1 = cz;
  r1.dispXM();
  cout << " ";
  r1.dispNL();
  cout << " ";
  r1.dispXB();
  cout << endl;

  XS &r2 = gz;
  r2.dispXM();
  cout << " ";
  r2.dispNL();
  cout << " ";
  r2.dispXB();
  cout << endl;

  XS &r3 = dx;
  r3.dispXM();
  cout << " ";
  r3.dispNL();
  cout << " ";
  r3.dispXB();
  cout << endl;

  return 0;
}