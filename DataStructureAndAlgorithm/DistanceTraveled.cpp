#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int distanceTraveled(int mainTank, int additionalTank)
  {
    int res = 0;
    while (mainTank >= 5)
    {
      mainTank -= 5;
      res += 5 * 10;
      if (additionalTank > 0)
      {
        additionalTank--;
        mainTank++;
      }
    }
    return res + mainTank * 10;
  }
};
