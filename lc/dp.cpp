#include<bits/stdc++.h>
using namespace std;
class Solution {
  public: int minCostClimbingStairs(vector < int > & cost) {
    vector < int > dp(cost.size() + 2, -1);
    int x = re(cost, 0, 0, dp);
    int y = re(cost, 1, 0, dp);
    return min(x, y);
  }
  int re(vector < int > & c, int cp, int co, vector < int > & dp) {
    if (dp[cp] != -1) {
      cout << "dpxistal" << dp[cp] << "  " << cp << endl;
      return dp[cp];
    }
    if (cp > c.size() - 1) {
      cout << "hereco " << co << endl;
      return co;
    } else {
      if (cp >= c.size() - 2) {
        int p  =  re(c, cp + 2, co + c[cp], dp);
        if(p<dp[cp] && dp[cp] != -1){
            dp[cp] = p ; 
            return  p ; 
        }
      }
      int x = re(c, cp + 2, co + c[cp], dp);
      int y = re(c, cp + 1, co + c[cp], dp);
      int k  =  min (x,y) ; 
      if (dp[cp] == -1) {
        dp[cp] = k;
        cout << "dpxistnot" << dp[cp] << " "<<cp << endl;
        return dp[cp];
      }
    }
    return INT_MAX;
  }
};
int main()
{
    vector<int> v = {10,15,20} ;   
    Solution s ;
    cout<<s.minCostClimbingStairs(v)<<endl ;
    return 0 ;

}