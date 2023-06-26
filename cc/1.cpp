#include <bits/stdc++.h>
using namespace std;
int main() {
void re(string &a , int i  )  ;
int t ;
cin>>t  ; 
    
    for (int i = 0; i < t; i++)
    {
        string a  ; 
        cin>> a ; 
        re(a,0) ; 
        cout<< a  ; 
    }
}
void re(string &a , int i  )  {
   int  iteratortracker  = i ,size = a.size() ; 
   while ( iteratortracker<size)
   {
    if (a[iteratortracker]=='('){
        re(a,i+1)  ;
        continue;
    }
    else if (  ){
       int noofsigns = 0 , nooftraversedletters = 0 , leftiter = iteratortracker ; 
       

       

    }
    iteratortracker++ ; 
   }
}
