#include <bits/stdc++.h> 
using namespace std ;
void re(stack<int>& s);
void sortStack(stack<int> &s)
{
	re(s) ; 
	return  ;
}
void re(stack<int>& s)
{
	if(s.size()==1)
	{
		return; 
	}

	int x  = s.top()  ;
	s.pop() ; 
	re(s) ; 
	stack<int> temp ; 
	//9 8 7  5
	//6 
    int ss = s.size() ;
	for(int i = 0; i < ss ; i++ )
	{
		if(s.top()>x)
		{
			temp.push(s.top()) ; 
			s.pop() ; 
		}
		else
		{
			break ; 
		}
	}
	s.push(x) ; 
    int ssss = temp.size() ;
	for(int i = 0 ; i < ssss ; i++)
	{
		s.push(temp.top()) ; 
		temp.pop() ; 
	}
	
}
int main()
{
    stack<int> s ; 
    s.push(-3) ; 
    s.push(14) ; 
    s.push(18) ; 
    s.push(-5) ; 
    s.push(30) ; 
    sortStack(s) ; 
    while(!s.empty())
    {
        cout<<s.top()<<" " ; 
        s.pop() ; 
    }
    cout<<endl ; 
    return 0 ; 
}