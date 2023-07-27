#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int>dp(cost.size() ,-1) ; 
        int x  =  re(cost ,  dp ,  0 , 0 ) ;
        int y  =  re(cost ,  dp ,  1 , 0 ) ;
        return min(x,y) ; 
    }
    int re(vector<int>& c , vector<int>& dp ,  int k  , int cc ) 
    {
         if(k>=c.size())
        {
            return cc;
        }
        if( dp[k]!=-1)
        {
            return dp[k] ; 
        }
        int x  = re(c,dp,k+1,cc+c[k]) ; 
        int p =  x -  cc; 
        int y  = re(c,dp,k+2,cc+c[k]) ;
        int kk = y-cc ; 
        cout<<min(p,kk)<<endl ; 
       return  dp[k] = min(p,kk) ; 
    
    }
};

/*class Solution {
public:
    vector<int> dp ; 
    int minCostClimbingStairs(vector<int>& cost){
     
      int x  =  re(cost,0,0) ;    
      int y  =  re(cost,1,0) ;
      return min(x,y) ;     
    }
    int re(vector<int> c , int cp ,  int co)
    {
        if(cp>=c.size()-1)
        {
            return co ; 
        }
        else
        {
            if(co[cp+1]<=co[cp+2])
            {
                cp.push_back[]
               re(c,cp+1,co[0])  ;
            }
            else
            {
                re(c,cp+2,co[1]) ; 
            }
        }
        
        

        


    }
};*/
int main()
{
    vector<int> c = {10,15,20} ;
    Solution s ;    
    cout<<s.minCostClimbingStairs(c)<<endl ;    
    return 0 ;

}