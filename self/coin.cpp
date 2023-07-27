#include<bits/stdc++.h>
using namespace std;
class Solution {
  public: int coinChange(vector < int > & coins, int amount) {
    // sort(coins.begin(),coins.end()) ; 
    vector < int > dp(amount + 2, -1);
    return re(coins, dp, amount, 0, 0, coins.size()-1);
  }
  int re(vector < int > c, vector < int > & dp, int a, int sum, int coinnum, int index) {
    
    if (index == -1 || sum > a) {
      return -1;
    }
    if (dp[sum] != -1) {
      return coinnum + dp[sum];
    }
    if (sum == a) {
      return coinnum;
    }
    int x  = 0 ; 
    if(index>-1){
           x = re(c, dp, a, c[index] + sum, coinnum + 1, index);
        if (x != -1) {
      dp[sum] = x - coinnum;
    }
    else {
      int y = -1  ,  i = 0  ; 
      while(y==-1 && index-1-i>-1) {y = re(c, dp, a, sum+ c[index - i- 1], coinnum + 1, index  -i - 1) ; 
      i++ ; }
       return y ;
    } 

    }
    
    
    return x;

  }


};
int main()
{
 vector<int> coins = {1,2,5} ;
    int amount = 11 ;
    Solution s ;
    cout<<s.coinChange(coins,amount)<<endl ;
    return 0 ;
}