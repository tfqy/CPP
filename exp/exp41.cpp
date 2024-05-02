#include <cmath>
#include <iostream>
using namespace std;

class FS
{
private:
  double sb;
  double xb;

public:
  // 构造函数
  FS(double r = 0.0, double i = 0.0) : sb(r), xb(i) {}

  // 访问器函数
  double getsb() const { return sb; }
  double getxb() const { return xb; }

  void print();

  // 运算符重载
  FS operator+(const FS &c) const
  {
    return FS(sb + c.sb, xb + c.xb);
  }

  FS operator-(const FS &c) const
  {
    if (sb == c.sb && xb == c.xb)
      return FS(0, 0);
    else
      return FS(sb - c.sb, xb - c.xb);
  }

  friend FS operator+(const FS &c1, const FS &c2);
  friend FS operator-(const FS &c1, const FS &c2);

  friend istream &operator>>(istream &is, FS &c);
  friend ostream &operator<<(ostream &os, const FS &c);
};

void FS::print()
{ 

  if (sb == 0 && xb == 0)
  {
    cout << 0 << endl;
  }
  else if (sb == 0)
  {
    if (xb == 1)
    {
      cout << "i" << endl;
    }
    else if (xb == -1)
    {
      cout << "-i" << endl;
    }
    else
    {
      cout << xb << "i" << endl;
    }
  }
  else
  {
    cout << sb;
    if (xb > 0)
    {
      if (xb == 1)
      {
        cout << "+i" << endl;
      }
      else
      {
        cout << "+" << xb << "i" << endl;
      }
    }
    else if (xb < 0)
    {
      if (xb == -1)
      {
        cout << "-i" << endl;
      }
      else
      {
        cout << "-" << -xb << "i" << endl;
      }
    }
  }
}

// 友元函数重载 +
FS operator+(const FS &c1, const FS &c2)
{
  return FS(c1.sb + c2.sb, c1.xb + c2.xb);
}

// 友元函数重载 -
FS operator-(const FS &c1, const FS &c2)
{
  if (c1.sb == c2.sb && c1.xb == c2.xb)
    return FS(0, 0);
  else
    return FS(c1.sb - c2.sb, c1.xb - c2.xb);
}

// 重载 >> 运算符
istream &operator>>(istream &is, FS &c)
{
  is >> c.sb >> c.xb;
  return is;
}

// 重载 << 运算符
ostream &operator<<(ostream &os, const FS &c)
{
  if (c.sb == 0 && c.xb == 0)
    os << 0;
  else if (c.sb == 0)
  {
    if (c.xb == 1)
      os << "i";
    else if (c.xb == -1)
      os << "-i";
    else
      os << c.xb << "i";
  }
  else
  {
    os << c.sb;
    if (c.xb > 0)
    {
      if (c.xb == 1)
        os << "+i";
      else
        os << "+" << c.xb << "i";
    }
    else if (c.xb < 0)
    {
      if (c.xb == -1)
        os << "-i";
      else
        os << "-" << -c.xb << "i";
    }
  }
  return os;
}

int main()
{
  FS c1, c2;
  cin >> c1 >> c2;

  FS sum = c1 + c2;
  FS diff = c1 - c2;

  cout << sum << endl;
  cout << diff << endl;

  return 0;
}