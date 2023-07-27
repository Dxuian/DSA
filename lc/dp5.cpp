#include<bits/stdc++.h>
using namespace std;
class Solution {
  public: int rob(vector < int > & nums) {
    vector < int > first, second;
    for (int i = 0; i < nums.size(); i++) {
      if (i != nums.size() - 1)
        first.push_back(nums[i]);
      if (i != 0)
        second.push_back(nums[i]);
    }
    int x = rob1(first);
    int y = rob1(second);
    cout << x << y;
    return max(x , y);
  }
  int rob1(vector < int >& nums) {
    if (nums.size() == 1) {
      return nums[0];
    }
    vector < int > dp(nums.size(), -1);
    return max(re(nums, dp, 0, 0),re(nums, dp, 1, 0));
  }
  int re(vector < int > & n, vector < int > & dp, int k, int s) {
    if (k >= n.size()) {
      return s;
    }
    if (dp[k] != -1) {
      return s + dp[k];
    }
    int x = 0, y = 0;
    s += n[k];
    for (int i = k + 2; i < n.size(); i++) {
      y = re(n, dp, i, s);
      if (y > x) {
        x = y;
      }
    }

    if (x == 0) {
      dp[k] = n[k];
      return s;
    }
    dp[k] = x - s + n[k];
    return x;
  }
};

int main()
{
    vector<int> v = {1,2,3} ;   
    Solution s ;
    cout<<s.rob(v)<<endl ;
    return 0 ;

}