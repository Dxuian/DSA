#include<bits/stdc++.h>
using namespace std;
int rec(int a)
{//A recursive function is a function that calls itself during its execution.
   if(a==0)
   {
    return 0; 
   }
   //EXAMPLE OF TAILED RECURSION
   /*IN HEAD RECURSION the recursive process is before the processing or in this case cout*/
   cout<<a<<"\n" ; 
   rec(a-1) ;
   return 0;
    
}
int main()
{
   int a  ; 
    cout<<"Enter an integer: "; 
    cin>>a ; 
    rec(a) ;
}