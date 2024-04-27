#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<int> findColumnWidth(vector<vector<int>> &grid)
  {
    int n = grid[0].size();
    vector<int> ans(n);
    for (int j = 0; j < n; j++)
    {
      for (auto &row : grid)
      {
        ans[j] = max(ans[j], (int)to_string(row[j]).length());
      }
    }
    return ans;
  }
};