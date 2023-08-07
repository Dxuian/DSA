#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> x  ; 
        if(pushed.size()==0)
        {
            if(popped.size()==0)
            {
                return false  ; 
            }
            return true  ; 
        }
        x.push(pushed[0]) ;
        int i , j  ;  
        for( i = 1 , j = 0 ; i < pushed.size() && j < popped.size() ; )
        {
            //x.size()!=0 && 
            // cout<<x.top() << " "<< popped[j] <<" "<<pushed[i]<<endl ; 
            if((x.size()!=0 && popped[j]!=x.top())|| (x.size()==0 && pushed[i]!=popped[j]))
            {
                x.push(pushed[i]) ;
                cout<<"pushing : "<<pushed[i]<<endl ;
                i++ ;  
            }
            else
            {   
                // x.push(pushed[i]) ;
                if(x.size()!=0){
                    x.pop();  
                }
                cout<<"popping : "<<popped[i]<<endl ; 
                j++ ; 
                // i++ ;  
            }
        }
        // cout<<pushed[i]<<" "<<popped[j]<<endl ; 
        for(int  m = j  ;  m < popped.size() ; m++ )
        {
            cout<<"popped[m]: "<<popped[m]<<" "<<x.top()<<endl ; 
            if(x.top()!=popped[m])
            {
                return false ; 
            }
            
            x.pop() ; 
        }
        return true ;  
    }
};
int main()
{
    vector<int> pushed = {2,1,0} ;
    vector<int> popped = {2,1,0} ;
    Solution s ;
    cout<<s.validateStackSequences(pushed,popped)<<endl ;
    return 0 ;

}