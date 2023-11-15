#include "algorithm"
#include "iostream"
#include "stdlib.h"
#include "vector"
using namespace std;

class NumArray
{
private:
  vector<int> nums;

public:
  NumArray(vector<int> &nums)
  {
    this->nums = nums;
  }

  void update(int index, int val)
  {
    nums[index] = val;
  }

  int sumRange(int left, int right)
  {
    int sum = 0;
    for (int i = left; i <= right; i++)
    {
      sum += nums[i];
    }
    return sum;
  }
};