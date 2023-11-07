#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


class Solution
{
public:
  int vowelStrings(vector<string> &words, int left, int right)
  {
    int res = 0;
    vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};

    for (int i = left; i <= right; i++)
    {
      if (count(vowels.begin(), vowels.end(), words[i].at(0)) && count(vowels.begin(), vowels.end(), words[i].at(words[i].size() - 1)))
      {
        res++;
      }
    }
    return res;
  }
};

int main(int argc, char const *argv[])
{
  vector<string> words = {"are", "amy", "u"};
  int left = 0, right = 2;
  Solution solution;
  cout << solution.vowelStrings(words, left, right) << endl;
  return 0;
}