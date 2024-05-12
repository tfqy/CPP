#include <bits/stdc++.h>
using namespace std;

class Solution
{

  unordered_map<int, int> dp;

public:
  int minDays(int n)
  {
    if (n <= 1)
      return n;
    if (dp.count(n))
      return dp[n];
    // 如果 n 是偶数,可以吃掉 n/2 个橙子,然后加 1 天。
    // 如果 n 是奇数,可以先吃掉 n-1 个橙子,然后加 1 天。
    // 或者吃掉 n/3 个橙子,然后加 1 天

    // 如果 n 能被 3 整除,可以直接吃掉 n/3 个橙子,需要的天数就是 minDays(n / 3)。
    // 如果 n 除以 3 余 1,需要先吃掉 n-1 个橙子,需要 1 天,然后再吃掉剩下的 1 个橙子,需要 minDays(n / 3) 天。
    // 如果 n 除以 3 余 2,需要先吃掉 n-2 个橙子,需要 1 天,然后再吃掉剩下的 2 个橙子,需要 minDays(n / 3) 天。
    return dp[n] = min(n % 2 + 1 + minDays(n / 2), n % 3 + 1 + minDays(n / 3));
  }
};