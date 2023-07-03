#include<bits/stdc++.h>
using namespace std;
    class Solution {
    public:
        vector<vector<int>> permute(vector<int>& nums) {
            vector<vector<int>> b ; 
            re(nums,b,0);
            return b  ; 
        }
    void re( vector<int>&n ,  vector<vector<int>>& b ,int k )
    {
        if(k==n.size()-1){
            b.push_back(n) ; 
            return  ; 
        }
        for (int i = k; i < n.size(); i++)
        {
            swap(n[k],n[i]) ; 
            re(n,b,k+1) ; 
        }
        
    }
};
int main()
{
    vector<int> a = {3,7,9} ;
    Solution v ;    
   vector<vector<int>> b  =  v.permute(a) ;
   for (int i = 0; i < b.size(); i++) {
        for (int j = 0; j < b[i].size(); j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0 ;
}