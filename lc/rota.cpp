#include<bits/stdc++.h>
using namespace std; 
class Solution {

  public: void rotate(vector < int > & nums, int k) {
    int s = nums.size();
    queue < int > cp;
    int m = s - 1;
    //%kmod
   
    k%=s ; 
    
     if(k==0 || s==1)
    {return ; }
    // 1 2 3 s-3 
cout<<k<<s<<endl ; 
    for (int i = 0; i < k; i++) {
      cp.push(nums[i]);
    }

    //1,2,3,4 
    for (int i = 0; i<s  ; i += k) {
      for (int j = 0; j < k && k + j + i - s < s  ; j++) {
        if (k + j+ i  < s) {
          cp.push(nums[j+ i  + k]);
          // cout<<nums[j+ i  + k]<<"ok"<<endl ; 
          nums[j+i+k] = cp.front();
          // cout<<cp.front()<<"oak"<<endl ; 

        } 
        else {
          cp.push(nums[k + j + i - s]);
          cout<<nums[j+ i  + k-s]<<"oka"<<endl ; 
          nums[k + j +i- s]= cp.front(); 
          cout<<cp.front()<<"oakws"<<endl ; 
        }
        cp.pop();
       for( int pk:nums)
        {
          cout<<pk<<endl ; 
        }
        cout<<"adadas" <<k<<i<<j<<endl ; 
      }
       

    }

  }
};
int main()
{
    Solution x  ;
    vector<int> a = {1,2,3,4}  ;
    x.rotate(a,3) ; 
}