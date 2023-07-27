#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
       vector<int> dp(days.size()-1) ; 
        return re(days,costs,dp,0,0,0) ; 
    }
    int re(vector<int>d,vector<int>c,vector<int>dp,int cc, int cd,int k)
    {
        if(k==d.size())
        {
            return cc ; 
        }
        int x  , y,z  ; 
        x = y = z = INT_MAX ; 
        if(d[d.size()-1]-cd>=30)
        {
            int i =  k+1 ;  
            while(d[i] - d[k] <30 )
            {
                i++ ; 
            }
           x=  re(d,c,dp,cc+c[2],d[i],i) ;  
        }
         if(d[d.size()-1]-cd>=7)
        {
            int i =  k+1 ;  
            while(d[i] - d[k] <6 )
            {
                i++ ; 
            }
         y=   re(d,c,dp,cc+c[1],d[i],i) ;  
        }
        if( d.size()>k )
        {
            int cdfo ; 
            d.size()-1>k ? cdfo = d[k+1] : cdfo = INT_MAX ;  
          z=  re(d,c,dp,cc+c[0],d[k+1],k+1) ;   
        }
        return min(x,min(y,z)) ; 
    }
};
int main()
{
  vector<int> d = {1,4,6,7,8,20} ;
  vector<int> c = {2,7,15} ;
  Solution s ;
  cout<<s.mincostTickets(d,c) ;
  return 0 ;


}