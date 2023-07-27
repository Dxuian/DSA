#include<bits/stdc++.h>
using namespace std;
class Solution {
  public: int lengthOfLIS(vector < int > & nums) {
    vector < int > dp(nums.size() + 1, -1);
    vector < int > a;
    a.push_back(-INT_MAX);
    return re(nums, dp, a, 0);
  }
  int re(vector < int >& n, vector < int >& dp, vector < int >& a, int k) {
    if (dp[k] != -1) {
      return a.size() + dp[k];
    }
    if (k == n.size()) {
      return a.size();
    }
    int x  = 0 , p = a.size();
    if (n[k] > a.back()){
    cout<<k<<" "<<n[k]<<endl;
      a.push_back(n[k]);
      x = re(n, dp, a, k + 1);
      a.pop_back();
      x -= a.size();
      dp[k] =  x  ; 
    }
    int y = re(n, dp, a, k + 1);
    cout<<"here: "<<y<<endl;
    return (p + max(x+p, y) - 1);
  }
};
int main()
{
    Solution s ; 
    vector<int> n = {0,1,0,3,2,3} ; 
    cout<<s.lengthOfLIS(n)<<endl ; 
    return 0 ;
    
}