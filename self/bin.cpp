#include<bits/stdc++.h>
using namespace std ; 
int bins( vector<int>& a  , int t) 
{
    int l = 0 , r = a.size() , m= 0 ; 
    while (l<r)
    {
        m = floor((l+r)/2) ; 
        if (a[m]==t)
        {
            return m  ; 
            /* code */
        }
        else if (a[m]>t)
        {
            r = m-1 ; 
        }
        else
        {
            l = m+1 ; 
        }
        
    }
    return -1 ; 
    
}
int main() 
{
    vector<int> arr = {1,23,54,56,67,88,98,344,6557} ; 
    cout<<bins(arr,344) ; 

}
