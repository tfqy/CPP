#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int maxSatisfied(vector<int> &customers, vector<int> &grumpy, int minutes)
  {
    int res = 0, increase = 0;
    for (int i = 0; i < customers.size(); i++)
    {
      // 获取当店主不生气时的顾客数
      if (grumpy[i] == 0)
        res += customers[i];
    }
    // 获取初始窗口大小为minutes内生气时的顾客数
    for (int i = 0; i < minutes; i++)
    {
      increase += customers[i] * grumpy[i];
    }
    int maxIncrease = increase; // 设为初始最大值
    // 将窗口向后移动
    for (int i = minutes; i < customers.size(); i++)
    {
      int lose = customers[i - minutes] * grumpy[i - minutes];
      int add = customers[i] * grumpy[i];
      increase = increase - lose + add;
      maxIncrease = max(maxIncrease, increase);
    }
    return res + maxIncrease;
  }
};