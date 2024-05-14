#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int minDeletion(vector<int> &nums)
  {
    int n, len, p1 = 0, p2 = 1, ans = 0;
    n = len = nums.size();
    if (!len)
    {
      return 0;
    }
    if (len == 1)
    {
      return 1;
    }
    while (p1 < n)
    {
      while (p2 < len && nums[p1] == nums[p2])
      {
        p2++;
        ans++;
        n--;
      }
      p1 = p2 + 1;
      p2 = p1 + 1;
    }
    if (n & 1)
    {
      return ans + 1;
    }
    return ans;
  }
};