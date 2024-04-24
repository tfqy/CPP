#include <iostream>
using namespace std;

class Date
{
public:
  Date(int y, int m, int d) : year(y), month(m), day(d) {}
  Date() {}
  void addOneDay();
  void setDate(int, int, int);
  void showDate();

private:
  int year, month, day;
};

int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

void Date::setDate(int y, int m, int d)
{
  year = y;
  month = m;
  day = d;
}

bool isLeapYear(int year)
{
  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
  {
    return true;
  }
  return false;
}

void Date::addOneDay()
{
  if (day < days[month - 1])
  {
    day++;
  }
  else
  {
    if (month == 2 && isLeapYear(year) && day == 28)
    {
      day++;
    }
    else
    {
      day = 1;
      if (month == 12)
      {
        month = 1;
        year++;
      }
      else
      {
        month++;
      }
    }
  }
}

void Date::showDate()
{
  printf("%02d/%02d/%d\n", day, month, year);
}

int main(int argc, char **argv)
{
  Date date;
  int y, m, d;
  cin >> y >> m >> d;
  if (y < 0 || m < 0 || m > 12 || d < 0 || d > 31)
  {
    return 0;
  }
  date.setDate(y, m, d);
  date.addOneDay();
  date.showDate();
  return 0;
}
