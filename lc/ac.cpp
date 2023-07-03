#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
     vector<int> a ; 
     sort(position.begin(),position.end()) ; 

     for(int i = 0 ; i < position.size()-1 ; i++)
     {
        for(int j = i+1 ; j< position.size()  && i!=j; j++ )
        {
            a.push_back(abs(position[i]-position[j])) ; 
        }
     }   
   
        cout<<"ha\n" ; 
     sort(a.begin(),a.end());
     int dist  ;
    if(position.size()==m)
    {
        dist=a[0];
    }
    else{
        dist =ceil(1.0*(position[position.size()-1]-position[0]))/(m-1);
    }
     int l  = 0 , r = a.size()-1 ; 
    cout<<"here we go\n"<<a[a.size()-1] ;
    int ms ;  
    while(l<=r)
     {
          ms =  floor((l+r)/2) ;  
         if(a[ms]==dist)
         {
                 cout<<"returning"<<a[ms]<<endl ; 
             return a[ms] ; 
         }
         else if(a[ms]>dist)
         {
             r = ms-1 ; 
         }
         else if(a[ms]<dist)
         {
             l = ms+1 ; 
         }
        //  if(m==r){return a[m]; }
        //  if(    abs(a[m]-  dist)<abs(a[m-1]-dist)  && (  abs(a[m]-dist)<abs(a[m+1]-dist)))
        //  {
        //      return a[m];
        //  }
        //  else if(   (abs(a[m] - dist)>abs(a[m+1] -dist)))
        //  {
        //      l = m  ;
        //  }
        //  else if (abs(a[m]-  dist)>abs(a[m-1]-dist)){
        //      r = m ; 
        //  }
     }
     cout<<"returning"<<a[ms]<<endl ; 
    return a[ms] ; 
    }
};


int main()
{
    vector<int> a  = {269826447,974181916,225871443,189215924,664652743,592895362,754562271,335067223,996014894,510353008,48640772,228945137} ;
    Solution x ;
    cout<<x.maxDistance(a,3) ;  
}