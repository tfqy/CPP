#include <bits/stdc++.h>
using namespace std;

class SnapshotArray
{

  int snap_id = 0;
  unordered_map<int, vector<pair<int, int>>> history;

public:
  SnapshotArray(int length)
  {
  }

  void set(int index, int val)
  {
    history[index].emplace_back(snap_id, val);
  }

  int snap()
  {
    return snap_id++;
  }

  int get(int index, int snap_id)
  {
    auto h = history[index];
    int j = ranges::lower_bound(h, make_pair(snap_id + 1, 0)) - h.begin() - 1;
    return j >= 0 ? h[j].second : 0;
  }
};