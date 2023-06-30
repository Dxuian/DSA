#include<bits/stdc++.h>
using namespace std;
void rev(int (&a)[],int s , int i=0 )
{
    // cout<<"heres stuff:  "<<(sizeof(a)/sizeof(a[0]))<<endl ; 
    if(i==floor(s/2)){return  ;} ; 
    swap(a[i],a[s - i]) ; 
    rev(a,s,i+1) ; 
}
int main()
{
   int a[]  = {1,2,3,4,5,6,7,8,9} ; 

    rev(a,8) ;
    for(int i:a)
    {
        cout<<i<<endl ; 
    }

}