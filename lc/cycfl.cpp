#include<bits/stdc++.h>
using namespace std ; 
class Solution {
public:
    int search(vector<int>& nums, int target) {
       int r  = nums.size() -1 , l = 0 ;  
       int m , sm  , hf =  float(r/2)  ; 
       while( l <= r )
       {  
           m  = float((l+r)/2) ;
           cout << m-1 << m << m+1 <<endl ; 
           cout << l << r  <<endl ; 
           if( nums[m-1] > nums[m] && nums[m] < nums[m+1] )
           {
               sm = m ; 
               cout<<"fount it "<<sm <<endl ; 
               break ; 
           }
           else if ( nums[m-1] < nums[m] )
           {
                l = m ; 
           }
            else if ( nums[m+1] < nums[m] )
           {
             r  = m  ; 
           }
       }
       if(l>r)
       {
           cout<<"couldnt"<<endl ;
           return -1  ; 
       }
       cout<<"outside the loop"<<endl ; 
       if (  sm <   hf )
       {
           cout << "returning " <<hf+sm<<endl ;
            cout << "hahah"<<endl ;
           return hf+sm ; 
       }
       cout << "returning " <<sm<<endl ;
       cout << "hahah"<<endl ;
       return sm  ; 
    }
};
int main()
{
    vector<int>  a 
}