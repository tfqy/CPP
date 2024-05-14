#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<int> successfulPairs(vector<int> &spells, vector<int> &potions, long long success)
  {
    vector<int> res;
    sort(potions.begin(), potions.end());
    for (auto &spell : spells)
    {
      long long min = success / spell;
      // 解释下面这行代码：
      // upper_bound(potions.begin(), potions.end(), min) - potions.begin()
      // 1. upper_bound(potions.begin(), potions.end(), min) 返回的是一个迭代器，指向第一个大于min的元素
      // 2. potions.begin() 返回的是一个迭代器，指向容器的第一个元素
      // 3. 两个迭代器相减，得到的是两个迭代器之间的距离，也就是第一个大于min的元素的下标
      // 4. potions.size() - (upper_bound(potions.begin(), potions.end(), min) - potions.begin()) 得到的是第一个小于min的元素的下标
      res.push_back(potions.size() - (upper_bound(potions.begin(), potions.end(), min) - potions.begin()) + 1);
    }

    return res;
  }
};