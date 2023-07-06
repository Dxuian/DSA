#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
     vector<vector<string>> c ;
     string t ;
     vector<string> p ;  
     re(c,n,t,0,0, p ) ; 
     return c ; 
    }
    void re( vector<vector<string>>& c , int n, string& t , int xfo, int yfo , vector<string>& p )
    {
       if(xfo >=n || yfo>=n ){
       
         c.push_back(p) ; 
           return  ; 
       }
       for( int i  = 0 ; i < n ;i++)
       {
           
           if(isafe(c,n,i,yfo,p))
           {
                int k = 1 ; 
               t+="Q" ; 
              while(t.size()<n)
              {
                t+='.';
                k++ ; 
              }
                 p.push_back(t) ; 
                 string l = "" ; 
               re(c,n,l,0,yfo+1,p) ;  
              while (k>0)
              {
                t.pop_back() ; 
                k-- ; 
           
              }
              
               p.pop_back() ; 
           }
           t+='.' ; 
          
       }
       return ; 
    }
    bool isafe(vector<vector<string>>& c , int n , int x , int y,vector<string>& p)
    {
        bool h= true,v = true,d =true ; 
        if(p.size() == 0)
        {
            return true ; 
        }
       
         for( int i = 0 ; i < p.size() ; i++)
        {
            if(p[i][x] == 'Q')
            {
                return false  ; 
                break ; 
            }
        }
        for(int i  = 1  ; x + i <p[0].size() &&   x+ i>=0 && y-i>=0 ; i++ )
        {
            if(p[y-i][x+i]=='Q')
            {
                return false  ; 
            }
        }
        for (int i = 1; x-i<p[0].size()  && y-i>=0 && x-i>=0; i++)
        {
            if (p[y-i][x-i]=='Q')
            {
                return false ; 
            }
            
        }
        
        // for( int  i =  0 ; x-min(y,x)+i < p[x].size() && x-min(y,x)+i > -1 && y-min(y,x)+i < p.size()  && y-min(y,x)+i >-1 ; i++)
        // {
        //     if(p[y-min(y,x)+i][x-min(y,x)+i] == 'Q')
        //     {
        //         return false ; 
        //     }
        // }
        // for( int  i =  0 ; x+max(y,x)-i <  p[x].size() && x+max(y,x)-i > -1 && y-max(y,x)+i < p.size()  && y-max(y,x)+i >-1 ; i++)
        // {
        //     if(p[y-max(y,x)+i][x+max(y,x)-i] == 'Q')
        //     {
        //         return false ; 
        //     }
        // }       
        if(h==true && v==true && d==true)
        {
            return true ; 
        }
        return false ; 
    }
};
int main()
{
    int n = 5 ;
    Solution x ;
    vector<vector<string>> b = x.solveNQueens(n) ;  
    for(auto i : b)
    {
        for(auto j : i)
        {
            cout<<j<<" " ; 
        }
        cout<<endl ; 
    }
    return 0 ;
}