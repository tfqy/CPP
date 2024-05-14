#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
        int res = 0, n = s.size();
        vector<int> cnt(2);
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                cnt[1]++;
                res = max(res, min(cnt[0], cnt[1]) * 2);
            } else if (i == 0 || s[i - 1] == '1') {
                cnt[0] = 1;
                cnt[1] = 0;
            } else {
                cnt[0]++;
            }
        }
        return res;
    }
};
