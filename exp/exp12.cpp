#include <iostream>
using namespace std;

class Time
{
public:
  Time(int h, int m, int s) : hour(h), minute(m), second(s) {}
  Time() {}
  void setTime(int, int, int);
  void showTime();

private:
  int hour, minute, second;
};

void Time::setTime(int h, int m, int s)
{
  hour = h;
  minute = m;
  second = s;
}

void Time::showTime()
{
  printf("%02d:%02d:%02d\n", hour, minute, second);
}

int main(int argc, char const *argv[])
{
  Time t;
  int h, m, s;
  cin >> h >> m >> s;
  t.setTime(h, m, s);
  t.showTime();
  return 0;
}
