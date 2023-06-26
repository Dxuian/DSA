#include<bits/stdc++.h>
using namespace std ; 
int main( )
{
    int a[]  = {21,23,43,45,56,6,7,8,89,7,65,54,43,32,2,45,7,685,57,45,54,32,42,453,64,7,79,7,9,6,65,354,435} ; 
    int temp   ; 
    for ( int i = 0 ; i < sizeof(a)/sizeof(a[0]) ; i++)
    {
        for (int j = i+1; j < sizeof(a)/sizeof(a[0]) ; j++)
        {
            if(a[i]>a[j])
            {
                temp =  a[j]  ; 
                a[j] = a[i]; 
                a[i] = temp ;  

            }
        }
        
    }
    int k =  12 ; 

     

    return 0; 
}