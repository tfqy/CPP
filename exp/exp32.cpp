// Menu.h
#ifndef MENU_H
#define MENU_H

class Menu
{
public:
  int show();
};

#endif

// Carlo.h
#ifndef CARLO_H
#define CARLO_H

class Carlo
{
public:
  Carlo(double Weight = 0, double Price = 0);
  virtual ~Carlo();
  void SetCarlo(double = 0, double = 0);
  const double &GetCurrentTotalWeight() const;
  const double &GetCurrentTotalPrice() const;
  void BuyBox();
  void SellBox();
  void ShowBoxInfo() const;

protected:
  static double TotalWeight;
  static double TotalPrice;

private:
  double BoxWeight;
  double BoxPrice;
};

#endif

// Carlo.cpp
// #include "Carlo.h"
#include <iostream>

double Carlo::TotalWeight = 0.0;
double Carlo::TotalPrice = 0.0;

Carlo::Carlo(double Weight, double Price)
{
  SetCarlo(Weight, Price);
}

Carlo::~Carlo()
{
  SellBox();
}

void Carlo::SetCarlo(double Weight, double Price)
{
  BoxWeight = Weight;
  BoxPrice = Price;
}

const double &Carlo::GetCurrentTotalWeight() const
{
  return TotalWeight;
}

const double &Carlo::GetCurrentTotalPrice() const
{
  return TotalPrice;
}

void Carlo::BuyBox()
{
  TotalWeight += BoxWeight;
  TotalPrice += BoxPrice;
}

void Carlo::SellBox()
{
  TotalWeight -= BoxWeight;
  TotalPrice -= BoxPrice;
}

void Carlo::ShowBoxInfo() const
{
  std::cout << "BoxWeight:" << BoxWeight << std::endl;
  std::cout << "BoxPrice:" << BoxPrice << std::endl;
}

// main.cpp
// #include "Carlo.h"
// #include "Menu.h"
#include <iostream>

int main()
{
  double w, v;
  char c;
  std::cin >> w >> v >> c;

  Carlo box(w, v);

  if (c == 'b')
  {
    box.BuyBox();
    std::cout << "TotalWeight:" << box.GetCurrentTotalWeight() << std::endl;
    std::cout << "TotalPrice:" << box.GetCurrentTotalPrice() << std::endl;
  }
  else if (c == 's')
  {
    box.SellBox();
    std::cout << "TotalWeight:" << box.GetCurrentTotalWeight() << std::endl;
    std::cout << "TotalPrice:" << box.GetCurrentTotalPrice() << std::endl;
  }

  return 0;
}