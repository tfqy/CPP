#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Shape
{
public:
  virtual double getArea() const = 0;
  virtual string getType() const = 0;
};

class Rectangle : public Shape
{
public:
  Rectangle(int width, int height) : width(width), height(height) {}
  double getArea() const override { return width * height; }
  string getType() const override { return "Rectangle"; }

private:
  int width, height;
};

class Circle : public Shape
{
public:
  Circle(int radius) : radius(radius) {}
  double getArea() const override { return 3.14 * radius * radius; }
  string getType() const override { return "Circle"; }

private:
  int radius;
};

class Triangle : public Shape
{
public:
  Triangle(int a, int b, int c) : a(a), b(b), c(c) {}
  double getArea() const override
  {
    double s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
  }
  string getType() const override { return "Triangle"; }

private:
  int a, b, c;
};

int main()
{
  int n;
  cin >> n;

  vector<Shape *> shapes;
  for (int i = 0; i < n; i++)
  {
    string type;
    cin >> type;
    if (type == "Rectangle")
    {
      int width, height;
      cin >> width >> height;
      shapes.push_back(new Rectangle(width, height));
    }
    else if (type == "Circle")
    {
      int radius;
      cin >> radius;
      shapes.push_back(new Circle(radius));
    }
    else if (type == "Triangle")
    {
      int a, b, c;
      cin >> a >> b >> c;
      shapes.push_back(new Triangle(a, b, c));
    }
  }

  sort(shapes.begin(), shapes.end(), [](Shape *a, Shape *b)
       { return a->getArea() < b->getArea(); });

  for (Shape *shape : shapes)
  {
    double area = shape->getArea();
    if (area == static_cast<int>(area))
    {
      cout << shape->getType() << ":" << static_cast<int>(area) << endl;
    }
    else
    {
      cout << shape->getType() << ":" << fixed << setprecision(2) << area << endl;
    }
  }

  for (Shape *shape : shapes)
  {
    delete shape;
  }

  return 0;
}