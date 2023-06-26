#include <bits/stdc++.h> 
using namespace std ; 
string replaceSpaces(string &str){
	// Write your code here.
	int  i = 0 ;  
	while( i< str.length()) 
	{
		cout<<int(str[i])<<endl ; 
		if(  int(str[i])  == 32)
		{
			str.replace(i,1,"@40");
		}
		i++ ; 
	}
    return str  ; 
}
int main()
{
    string a  = "Coding Ninjas Is A Coding Platform" ; 
    cout<<replaceSpaces(a) ; 
}