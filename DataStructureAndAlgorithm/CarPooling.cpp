#include "algorithm"
#include "iostream"
#include "vector"
using namespace std;

class Solution
{
public:
  bool carPooling(vector<vector<int>> &trips, int capacity)
  {
    int to_max = 0;
    for (const auto &trip : trips)
    {
      to_max = max(to_max, trip[2]);
    }

    vector<int> diff(to_max + 1);
    for (const auto &trip : trips)
    {
      // 在from时刻增加人数
      diff[trip[1]] += trip[0];
      // 在to时刻减少人数
      diff[trip[2]] -= trip[0];
    }

    int cnt = 0;
    for (const auto &d : diff)
    {
      cnt += d;
      if (cnt > capacity)
      {
        return false;
      }
    }
    return true;
  }
};

int main(int argc, char const *argv[])
{
  Solution *obj = new Solution();
  vector<vector<int>> trips = {{2, 1, 5}, {3, 3, 7}};
  int capacity = 4;
  cout << obj->carPooling(trips, capacity) << endl;
  return 0;
}
