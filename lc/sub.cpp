#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        vector<vector<int>>dp(nums.size()+2 , vector<int>(nums.size()+2,-1)) ;
        int  a = re(nums,x,0,0,nums.size()-1,dp);
        a==INT_MAX ? a = -1 : a = a ;
        return a ;
    }
    int re(vector<int> n, int x , int turns,int l , int r, vector<vector<int>>dp)
    {
        if(x<=0 || l>r)
        {
            if(x==0)
            {
                return turns ; 
            }
            if(l>r||x<0)
            {
                // cout<<x<<endl ; 
                return INT_MAX ; 
            }
        }
        if(dp[l][r]!=-1)
        {
            return turns+dp[l][r]; 
        }
        int f  = re(n ,x - n[l] , turns+1 , l+1,r,dp) ;
        int g  = re(n ,x - n[r] , turns+1 , l,r-1,dp) ;
        int a  =  min(f,g) ; 
        a!=-1? dp[l][r] = a : a=a;
        return a ;  
    
    }
};
int main()
{
    vector<int> v = {1241,8769,9151,3211,2314,8007,3713,5835,2176,8227,5251,9229,904,1899,5513,7878,8663,3804,2685,3501,1204,9742,2578,8849,1120,4687,5902,9929,6769,8171,5150,1343,9619,3973,3273,6427,47,8701,2741,7402,1412,2223,8152,805,6726,9128,2794,7137,6725,4279,7200,5582,9583,7443,6573,7221,1423,4859,2608,3772,7437,2581,975,3893,9172,3,3113,2978,9300,6029,4958,229,4630,653,1421,5512,5392,7287,8643,4495,2640,8047,7268,3878,6010,8070,7560,8931,76,6502,5952,4871,5986,4935,3015,8263,7497,8153,384,1136} ;
    Solution s ;
    cout<<s.minOperations(v,894887480)<<endl ;
    return 0 ;

}