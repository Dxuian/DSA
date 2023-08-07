#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector < vector < int > > & M, int n) {
      // code here 
      stack < int > x;
      for (int i = 0; i < n; i++) {
        if (M[0][i] == 1) {
          x.push(i);
        }
      }
      
      if (x.size() == 0) {
       int x = 2  ; 
       for (int i  = 1 ; i < n ; i++)
       {
           if(M[i][0]!=1)
           {
               x = 1  ; 
               break ; 
           }
       }
       if(x==2)
       {
           return 0 ; 
       }
        return -1 ; 
      }
    //   cout<<"ok"<<endl ; 
      int p =  x.size() , q=-1;
      for(int i  = 0  ; i < p ; i++ )
      {
          if(M[x.top()][0]==0)
          {
              q  = x.top() ;
              break ; 
          }
          x.pop() ; 
      }
    //   cout<<q<<endl ; 
      for(int i = 0 ; i < n ; i++)
      {
          if(M[q][i]!=0)
          {
              return -1 ; 
          }
      }
      return q ; 
    
    
    }
};
int main()
{
    int n = 2  ; 
    vector<vector<int>> x = {{0,1,0},{0,0,0},{0,1,0}} ;
    Solution s ;
    cout<<s.celebrity(x,n) ;
    return 0 ;

}