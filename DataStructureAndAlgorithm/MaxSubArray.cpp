#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int maxSubArray(vector<int> &nums)
  {
    int pre = 0, maxAns = nums[0];
    for (const auto &x : nums)
    {
      pre = max(pre + x, x);
      maxAns = max(maxAns, pre);
    }
    return maxAns;
  }
};

int main(int argc, char const *argv[])
{
  Solution *obj = new Solution();
  vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
  cout << obj->maxSubArray(nums) << endl;
  return 0;
}
