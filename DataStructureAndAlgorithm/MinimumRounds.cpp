#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int minimumRounds(vector<int> &tasks)
  {
    unordered_map<int, int> cnt;
    for (int t : tasks)
    {
      cnt[t]++;
    }
    int ans = 0;
    for (auto &[_, c] : cnt)
    {
      if (c == 1)
      {
        return -1;
      }
      ans += (c + 2) / 3;
    }
    return ans;
  }
};