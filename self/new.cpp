#include<bits/stdc++.h>
using namespace std;
int main()
{
   int* a  = new int(123) ; 
   cout << *a << endl;  
   int x  =  1231 ; 
   delete a ; 
   a = &x ;
    cout << *a << endl;
    return 0 ; 
}