#include <bits/stdc++.h>
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    int l=  0 , r  = n , m ,temp = -1 ; 
   
    while( l <  r )
    {
         m  =  std::floor((l+r)/2) ; 
         if(arr[m]== k)
         {
             temp =  m  ; 
            int lowiter = temp-1 ; 
            int highiter = temp+1 ; 
             while(arr[lowiter]==arr[m] && lowiter>-1)
             {
                 lowiter --  ; 
             }
             while(arr[highiter] == arr[m] && highiter<n+1)
             {
                 highiter++ ; 
             }
             pair<int,int> a(lowiter,highiter) ; 
             return a ; 

         }
         else if (arr[m]>k)
         {
             r =  m  ; 
         }
         else if (arr[m]<k)
         {
             l = m ; 
         }
    }
    pair<int,int> b(-1,-1) ; 
    return b ; 
    

} 