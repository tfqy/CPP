#include "algorithm"
#include "vector"
using namespace std;

class Solution
{
public:
  int maximizeSum(vector<int> &nums, int k)
  {
    int m = *max_element(nums.begin(), nums.end());
    return (m * 2 + k - 1) * k / 2;
  }
};