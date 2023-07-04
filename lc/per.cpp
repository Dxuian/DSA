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
            vector<int> x  = n ; 
            re(x,b,k+1) ; 
        }
    }
};

int main()
{
    vector<int> a = {3,7,9,12,12,132,43,32,333} ;
    Solution v ;    
    auto start = std::chrono::high_resolution_clock::now();
    vector<vector<int>> b  =  v.permute(a) ;
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(stop - start);
    cout << duration.count() << endl;
    cout.flush() ; 
    return 0 ;
}