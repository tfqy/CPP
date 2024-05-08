#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<int> decrypt(vector<int> &code, int k)
  {
    int len = code.size();
    vector<int> res(len, 0);
    if (k == 0)
    {
      return res;
    }
    else
    {
      for (int i = 0; i < len; i++)
      {
        int sum = 0;
        for (int j = 0; j < abs(k); j++)
        {
          if (k > 0)
            sum += code[(i + j + 1) % len];
          else
            sum += code[(i - j - 1 + len) % len];
        }
        res[i] = sum;
      }
    }
    return res;
  }
};