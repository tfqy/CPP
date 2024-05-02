#include <iostream>
using namespace std;

class Time
{
public:
  Time() : hour(0), minute(0), second(0) {}
  void SetTime(int h, int m, int s)
  {
    hour = h;
    minute = m;
    second = s;
  }
  void Display()
  {
    cout << hour << ":" << minute << ":" << second << endl;
  }
  Time operator+(const Time &a)
  {
    Time result;
    result.second = second + a.second;
    result.minute = minute + a.minute + result.second / 60;
    result.hour = hour + a.hour + result.minute / 60;
    result.second %= 60;
    result.minute %= 60;
    return result;
  }
  Time operator-(const Time &a)
  {
    Time result;
    result.second = second - a.second;
    result.minute = minute - a.minute;
    result.hour = hour - a.hour;
    if (result.second < 0)
    {
      result.second += 60;
      result.minute--;
    }
    if (result.minute < 0)
    {
      result.minute += 60;
      result.hour--;
    }
    return result;
  }
  friend istream &operator>>(istream &is, Time &t);
  friend ostream &operator<<(ostream &os, const Time &t);

private:
  int hour, minute, second;
};

istream &operator>>(istream &is, Time &t)
{
  is >> t.hour >> t.minute >> t.second;
  return is;
}

ostream &operator<<(ostream &os, const Time &t)
{
  printf("%02d:%02d:%02d", t.hour, t.minute, t.second);
  return os;
}

int main()
{
  Time t1, t2;
  cin >> t1 >> t2;
  Time sum = t1 + t2;
  Time diff = t1 - t2;
  cout << sum << endl;
  cout << diff << endl;
  return 0;
}