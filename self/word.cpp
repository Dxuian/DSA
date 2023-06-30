#include<bits/stdc++.h>
using namespace std;
void ch(int n) ;
void re(int n,int l)
{
 
    if(l==0){return ;}
    else{
        string numbers[] = {"zero ","one ","two ","three ","four ","five ","six ","seven ","eight ","nine "} ;
        int a  = (n/ int(pow(10,l-1))) % 10;
        cout<<numbers[a] ; 
        re(n,l-1) ; 
      
    }
}
void ch(int n)
{
   int l = 0 ,p = n; 
   while((n/10)%10>1)
   {
    n/=10 ; 
    l++ ; 
   }
   re(p,l+1);
}

int main()
{
   cout<<"enter a number: " ;
    int n = 987654321;
    // cin>>n ;
    ch(n) ; 
}