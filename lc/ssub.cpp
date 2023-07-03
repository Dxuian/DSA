#include <bits/stdc++.h> 
using namespace std ; 
void re(string str , vector<string> &b , string& c , int k );
vector<string> subsequences(string str){
	
	vector<string> b ;
	string c  ;  
	re(str,b,c , 0)  ;
    return b  ; 
	
}
void re(string str , vector<string> &b , string& c , int k = 0 )
{
   if (k==str.length())
   {
    b.push_back(c) ; 
    return ;
   }
//add
   c+=str[k] ; 
   re(str,b,c,k+1) ; 
//rm 
   c.pop_back() ; 
   re(str,b,c,k+1) ;   
} 
int main()
{
    string a  = "hlo" ;
    vector<string> c  = subsequences(a) ; 
    for(string c:c)
    {
        cout<<c<<endl ; 
    }  
}  
