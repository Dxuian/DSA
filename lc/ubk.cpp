#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int change(int amount, vector<int>& coins) {
     sort(coins.begin(),coins.end()) ;
     vector<int>dp (coins.size(),-1) ; 
     int co = 0 ; 
     re(coins,dp,amount,0,0,co) ;   
     if(co==0)
     {
         return 0;
     }
     return co;
    }
    int re(vector<int>& c  , vector<int>& dp,int a ,int k , int s, int& co)
    {
       if(k>=c.size() || s>=a)
       {
         if(s==a){
           co++ ; 
         }
         return s ; 
       }
       if(dp[k]!=-1 && s+dp[k]>=a)
       {
         if(s+dp[k]==a){
           co++ ; 
         }
         return s+dp[k] ; 
       }
       int p = INT_MAX , q = INT_MAX , r = 0 , l = 0 ;  
       for(int i = k ; i < c.size() ; i++)
       {
         p = re(c,dp,a,i,s+c[k],co) ; 
         q = re(c,dp,a,i+1,s,co) ; 
         if(p<r)
         {r=p ;}
       }
       return dp[k]  = r ; 
    }
};


int main()
{
    vector<int> v = {1,2,5} ;
    Solution s ;
    cout<<s.change(5,v) ;
    return 0 ;
}