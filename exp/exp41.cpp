#include <iostream>
using namespace std;

class FS
{
private:
  double sb; // 实部
  double xb; // 虚部

public:
  // 构造函数
  FS(double s = 0, double x = 0) : sb(s), xb(x) {}

  // 显示函数
  void print()
  {
    if (xb >= 0)
    {
      if (sb == 0)
      {
        if (xb == 1)
        {
          cout << "i" << endl;
        }
        else
        {
          cout << xb << "i" << endl;
        }
      }
      else
      {
        if (xb == 1)
        {
          cout << sb << " + i" << endl;
        }
        else
        {
          cout << sb << " + " << xb << "i" << endl;
        }
      }
    }
    else
    {
      if (sb == 0)
      {
        if (xb == -1)
        {
          cout << "-i" << endl;
        }
        else
        {
          cout << -xb << "i" << endl;
        }
      }
      else
      {
        if (xb == -1)
        {
          cout << sb << " - i" << endl;
        }
        else
        {
          cout << sb << " - " << -xb << "i" << endl;
        }
      }
    }
  }

  // 重载运算符“ + ”
  FS operator+(const FS &f)
  {
    return FS(sb + f.sb, xb + f.xb);
  }

  // 重载运算符“ - ”
  FS operator-(const FS &f)
  {
    return FS(sb - f.sb, xb - f.xb);
  }

  // 友元函数重载“ + ”
  friend FS operator+(const FS &f1, const FS &f2)
  {
    return FS(f1.sb + f2.sb, f1.xb + f2.xb);
  }

  // 友元函数重载“ - ”
  friend FS operator-(const FS &f1, const FS &f2)
  {
    return FS(f1.sb - f2.sb, f1.xb - f2.xb);
  }

  // 重载 >> 运算符
  friend istream &operator>>(istream &is, FS &f)
  {
    is >> f.sb >> f.xb;
    return is;
  }

  // 重载 << 运算符
  friend ostream &operator<<(ostream &os, const FS &f)
  {
    if (f.xb >= 0)
    {
      if (f.sb == 0)
      {
        if (f.xb == 1)
        {
          os << "i";
        }
        else
        {
          os << f.xb << "i";
        }
      }
      else
      {
        if (f.xb == 1)
        {
          os << f.sb << " + i";
        }
        else
        {
          os << f.sb << " + " << f.xb << "i";
        }
      }
    }
    else
    {
      if (f.sb == 0)
      {
        if (f.xb == -1)
        {
          os << "-i";
        }
        else
        {
          os << -f.xb << "i";
        }
      }
      else
      {
        if (f.xb == -1)
        {
          os << f.sb << " - i";
        }
        else
        {
          os << f.sb << " - " << -f.xb << "i";
        }
      }
    }
    return os;
  }
};

int main()
{
  FS f1, f2;
  cin >> f1 >> f2;

  FS sum = f1 + f2;
  FS diff = f1 - f2;

  cout << sum << endl;
  cout << diff << endl;

  return 0;
}