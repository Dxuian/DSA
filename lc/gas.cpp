#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
      deque<pair<int,int>> x ; 
      int n  = gas.size() ; 
       for(int i  = 0 ;  i < n ; i++)
       {
          x.push_back(make_pair(gas[i], cost[i])) ; 
       }
       int ci = 0 , st = 0 , cp = 0 , d =  0 ,m =0 , nt = 0  ; 
       while(nt!=n-1 && m!=n-1)
       {
           ci>n? ci%=n : ci=ci ; 
           cp+=x.front().first ; 
           d+=x.front().second ; 
           if( cp>=d)
           {
               cp -= d ; 
               d =  0 ;
               m = 0 ;
               nt++;
           }
           else
           {
               cp =  0  ;
               d = 0 ;
               st = ci+1 ; 
               m++ ; 
               nt = 0 ;
           }
           ci++ ; 
           x.push_back(x.front()) ; 
           x.pop_front()  ;
           if((nt==n-1 && x.front().first <  x.front().second))
           {
               cout<<"ok"<<endl ; 
               st  = -1;
               break ; 
           }
       }
       cout<<m<<nt<<endl;
       m==n-1? st =  -1 : st = st ; 
       return st ;   
    }
};
int main()
{
    vector<int> gas = {3,3,4} , cost = {3,4,4} ;
    Solution x ;
    cout << x.canCompleteCircuit(gas,cost) << endl ;
    return 0  ; 
}