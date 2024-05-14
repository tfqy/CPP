#include <bits/stdc++.h>
using namespace std;

class FrontMiddleBackQueue
{

private:
  deque<int> q;

public:
  FrontMiddleBackQueue()
  {
    q.clear();
  }

  void pushFront(int val)
  {
    q.push_front(val);
  }

  void pushMiddle(int val)
  {
    q.insert(q.begin() + q.size() / 2, val);
  }

  void pushBack(int val)
  {
    q.push_back(val);
  }

  int popFront()
  {
    if (q.empty())
    {
      return -1;
    }
    int ans = q.front();
    q.pop_front();
    return ans;
  }

  int popMiddle()
  {
    if (q.empty())
    {
      return -1;
    }
    if (q.size() % 2 == 0)
    {
      int ans = q[q.size() / 2 - 1];
      q.erase(q.begin() + q.size() / 2 - 1);
      return ans;
    }
    else
    {
      int ans = q[q.size() / 2];
      q.erase(q.begin() + q.size() / 2);
      return ans;
    }
  }

  int popBack()
  {
    if (q.empty())
    {
      return -1;
    }
    int ans = q.back();
    q.pop_back();
    return ans;
  }
};

/**
 * Your FrontMiddleBackQueue object will be instantiated and called as such:
 * FrontMiddleBackQueue* obj = new FrontMiddleBackQueue();
 * obj->pushFront(val);
 * obj->pushMiddle(val);
 * obj->pushBack(val);
 * int param_4 = obj->popFront();
 * int param_5 = obj->popMiddle();
 * int param_6 = obj->popBack();
 */