#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int minSwapsCouples(vector<int> &row)
  {
    int res = 0;
    for (int i = 0; i < row.size(); i += 2)
    {
      int x = row[i];

      // 如果异或结果为1，说明是相邻的两个数，不需要交换
      if (row[i + 1] == (x ^ 1))
        continue;
      res++;
      for (int j = i + 1; j < row.size(); j++)
      {
        if (row[j] == (x ^ 1))
        {
          swap(row[i + 1], row[j]);
          break;
        }
      }
    }
    return res;
  }
};