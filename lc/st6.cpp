#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int scoreOfParentheses(string s) {
        int ts  = 0  , sm = 0 , mf  = 1 ;
        stack<char> x  ; 
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(s[i]=='(')
            {
                if(ts==0)
                {
                    ts = 1 ; 
                    x.size()!=0?mf*=2:mf=mf ;
                     x.push(s[i]) ; 
                    continue  ;    
                }
                mf*=2 ; 
                x.push(s[i]) ; 
            }
            else  
            {
              x.pop() ;
              ts*=mf ;
              sm+=ts ; 
              ts = 0 ;  
              mf/=2 ;
              mf==0?mf=1:mf=mf ;
            }
           
        }
        return sm  ; 
    }
};
int main()
{
    string s ="(()()())";
    Solution x  ;
    cout<<x.scoreOfParentheses(s)<<endl ;
    return 0 ;

}