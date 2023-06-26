#include <bits/stdc++.h>
using namespace std ; 
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
     int l = 0 ,  r =  nums.size()-1  ; 
     int m  ;
     int lindex =-1 , rindex= -1  , rightstarter ;  
     while(l<=r)
     {
     m = floor((l+r)/2) ;
         if(nums[m]==target)
         {
             rightstarter = m+1 ;
             l = 0  ; 
             r =  m-1 ;  
             lindex = m ; 

         }
         else if (nums[m]<target)
         {
             l = m+1 ; 
         }
         else
         {
             r = m-1 ; 
         }

     }
      vector<int> a ; 
     if(lindex==-1)
     {
          a  = {-1 , -1} ; 
        return a  ; 
     }
     if(nums[lindex]!=target)
     {
      a  = {-1 , -1} ; 
        return a  ; 
     }

     l = rightstarter , r =  nums.size()-1   ; 
     m = floor((l+r)/2) ; 
      while(l<=r)
     {
         m = floor((l+r)/2) ;
         if(nums[m]==target)
         {
             rindex = m ; 
             l = m+1 ; 
             r=nums.size()-1  ; 
         }
         else if (nums[m]<target)
         {
             l = m+1 ; 
         }
         else
         {
             r = m-1 ; 
         }

     }
     if (rindex==-1)
     {
         rindex = lindex ; 
     }
     
     if(nums[rindex]!=target)
     {
         rindex = lindex ; 
     }
     a  = {lindex , rindex} ; 
     return a  ; 

    }
};
int main()
{
    vector<int> a  = {1} ; 
    Solution x  ; 
    x.searchRange(a,6) ; 
    x.searchRange(a,1) ; 
}