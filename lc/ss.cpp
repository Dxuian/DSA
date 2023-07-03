#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
      vector<vector<int>> b ; 
 vector<int> c  ; 
      re(nums,b, c,0  )   ; 
      return b  ; 

    }
     void re(vector<int>& a , vector<vector<int>>& b,vector<int>& c,int k = 0  )
     {
        if (k==a.size())
        {
            b.push_back(c) ;
            return  ; 
        }
      


       //add
        c.push_back(a[k]) ; 
        re(a,b,c,k+1);

//sub
        c.pop_back();
        re(a,b,c,k+1);
        



        
        

       
     }
};
int main()
{
    vector<int> a = {1,2,3} ;
    Solution x ;
    vector<vector<int>> b = x.subsets(a) ;
    for(auto i : b)
    {
        for(auto j : i)
        {
            cout<<j<<" " ; 
        }
        cout<<endl ; 
    }
}