#include<bits/stdc++.h>
using namespace std;
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    vector<int> x(arr.size(),-1);
    int xx = -10 ; 
    for(int i  = 0  ; i < arr.size() ; i++)
    {
        cout<<arr[i]<<" "<<xx<<endl ; 
        if(arr[i]==xx)
        {
            x[i] = -1 ; 
            xx = -10;
            continue;
               
        }
        cout<<"ok1" ; 
        if(xx!=-10)
        {
            x[i] = xx ; 
            continue;
        }
        cout<<"ok1" ; 
        for(int j = i+1 ; j < arr.size() ; j++)
        {
            if(arr[j]<arr[i])
            {
                x[i] = arr[j]  ;
                xx =  arr[j] ; 
            }
        }
        // if(xx!=-10)
        // {
        //     x[i] = -1 ;
        //     continue;
        // }
        cout<<"ok1" ; 

    }
    return x ;
}
//34561
//
int main()
{
    vector<int> arr = {4,5,2,10,8} ;
    vector<int> x = nextSmallerElement(arr,5) ;
    for(int i = 0 ; i < x.size() ; i++)
    {
        cout<<x[i]<<" " ; 
    }
    cout<<endl ;
    return 0 ;

}