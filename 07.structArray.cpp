#include <iostream>
using namespace std;

struct Student
{
  int id;
  string name;
  double score;
};

int main(int argc, char const *argv[])
{
  Student s[3] = {
      {1, "张三", 89.5},
      {2, "李四", 90},
      {3, "王五", 78.5}};

  for (int i = 0; i < 3; i++)
  {
    cout << s[i].id << " " << s[i].name << " " << s[i].score << endl;
  }
  return 0;
}
