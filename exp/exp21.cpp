#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
  Employee(string name, string address, string city, string province, string postalCode) : name(name), address(address), city(city), province(province), postalCode(postalCode){};
  void SetData(string, string, string, string, string);
  void Display();

private:
  string name;
  string address;
  string city;
  string province;
  string postalCode;
};

void Employee::SetData(string name, string address, string city, string province, string postalCode)
{
  this->name = name;
  this->address = address;
  this->city = city;
  this->province = province;
  this->postalCode = postalCode;
}

void Employee::Display()
{
  cout << name << endl;
  cout << address << endl;
  cout << city << endl;
  cout << province << endl;
  cout << postalCode << endl;
}

int main(int argc, char const *argv[])
{
  string name, address, city, province, postalCode;
  cin >> name >> address >> city >> province >> postalCode;
  Employee e(name, address, city, province, postalCode);
  cin >> name >> address >> city >> province >> postalCode;
  e.SetData(name, address, city, province, postalCode);
  e.Display();
  return 0;
}