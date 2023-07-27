#include<bits/stdc++.h>
using namespace std;
// class Solution {
//   public: int rob(vector < int > & nums) {
//     int s = 0;
//     re(nums, s, 0);
//     return s;
//   }
//   void re(vector < int > & n, int s, int i) {
//     if (i == n.size()-1) {
//       return;
//     }
//     int x,y,z  ;
//     if (i + 1 < n.size()) {
//       x = n[i + 1];
//       if (i + 2 < n.size()) {
//         y = n[i + 2];
//       } else {
//         y = 0;
//         z = 0;
//       }
//       if (i + 3 < n.size()) {
//         z = n[i + 3];
//       } else {
//         z = 0;
//       }
//     }
//     else
//     {
//         x = y =z = 0  ; 
//     }

//     int k = max(x, max(y, z));
//     for (int ij = 0; ij < 3; ij++) {
//       if (n[ij] == k) {
//         re(n, s + k, ij + i);
//       }
//     }
//   }
// };

class Solution {
public:
    int rob(vector<int>& nums) {
       int e = 0  , o  = 1  ,th = 2  , se  = 0 , so = 0  ,st = 0 ; 
       while(e<nums.size() && o<nums.size() && th<nums.size()) 
       {
           se+=nums[e] ; 
           so+=nums[o] ;
           st+=nums[th] ;
           e+=2; 
           o+=2; 
           th+=2; 
       }  
       cout<<e<<" "<<o<<endl ;
       if(e<nums.size())
       {
           se+=nums[e] ; 
       }
       if(o<nums.size())
       {
           //    o+=2 ; 
           so+=nums[o] ; 
       }
       if(th<nums.size())
       {
           //    o+=2 ; 
           st+=nums[th] ; 
       }
       return max(se,max(so,st)) ;
    }
};
int main()
{
    vector<int> v = {1,2,3,1} ;
    Solution s ;
    cout<<s.rob(v) ;
    return 0 ;

}