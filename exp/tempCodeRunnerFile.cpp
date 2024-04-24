#include <iostream>
using namespace std;
class Rect
{
public:
  Rect(float l = 1, float w = 1) : Length(new float(l)), Width(new float(w)) {}
  Rect(const Rect &r) : Length(new float(*r.Length)), Width(new float(*r.Width)) {}
  void set(float l = 0, float w = 0)
  {
    *Length = l;
    *Width = w;
  }
  float getPerimeter();
  float getArea();
  ~Rect()
  {
    delete Length;
    delete Width;
  }

private:
  float *Length;
  float *Width;
};

float Rect::getPerimeter()
{
  return 2 * (*Length + *Width);
}

float Rect::getArea()
{
  return *Length * *Width;
}

int main(int argc, char **argv)
{
  float l, w;
  cin >> l >> w;
  Rect r(l, w);
  cout << r.getPerimeter() << " " << r.getArea() << endl;
  return 0;
}
