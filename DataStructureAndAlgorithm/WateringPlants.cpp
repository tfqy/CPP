#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int wateringPlants(vector<int> &plants, int capacity)
  {
    int ans = 0, curCapacity = capacity, step = 0;
    for (size_t i = 0; i < plants.size(); i++)
    {
      if (curCapacity < plants[i])
      {
        curCapacity = capacity;
        ans += step * 2 + 1;
        step++;
        curCapacity -= plants[i];
      }
      else
      {
        curCapacity -= plants[i];
        step++;
        ans++;
      }
    }
    return ans;
  }
};

int main(int argc, char **argv)
{
  Solution s;
  vector v = {2, 2, 3, 3};
  int res = s.wateringPlants(v, 5);
  cout << res << endl;
  return 0;
}
