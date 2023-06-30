#include<bits/stdc++.h>
using namespace std;
bool rev(string a,int s , int i=0)
{
    // cout<<"heres stuff:  "<<(sizeof(a)/sizeof(a[0]))<<endl ; 
    if(i==floor(s/2))
    {
        return  true;
        }  
    else if (a[i]==a[s-i]){
     return  (rev(a,s,i+1)) ; 
    }
   
    return false  ; 
}
int main()
{
   string a  = "hannah" ;
   string c = "banab" ;
   string d = "totol" ;
   string p = "palindrome" ;
   string q = "notpalindrome" ;
   string l = "level" ;
    string b  =  "car" ;
    cout<<a<<": "<<rev(a,a.length()-1)<<endl ;
    cout<<b<<": "<<rev(b,b.length()-1)<<endl ;  
    cout<<c<<": "<<rev(c,c.length()-1)<<endl ;
    cout<<d<<": "<<rev(d,d.length()-1)<<endl ;
    cout<<p<<": "<<rev(p,p.length()-1)<<endl ;
    cout<<q<<": "<<rev(q,q.length()-1)<<endl ;
    cout<<l<<": "<<rev(l,l.length()-1)<<endl ;
  

   

}