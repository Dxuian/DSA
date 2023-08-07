#include <bits/stdc++.h> 
using namespace  std;
class NStack
{
public:
    // Initialize your data structure.
    int* sta ;
    int* no ; 
    int sizon , sizofsta  ; 
    NStack(int N, int S)
    {
        // Write your code here.
        this->sizofsta = N*S ; 
        this->sizon = N ; 
        this->sta = new int[this->sizofsta] ;
        this->no = new int[this->sizon] ; 
        for(int i  = 0 ; i < this->sizofsta ; i++)
        {
            this->sta[i] = INT_MAX ;
        }
        for(int i  =  0 ; i < this->sizon ; i++)
        {
            this->no[i] = -1 ; 
        }
        
    }

    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x, int m)
    {
        // Write your code here.
        if(this->no[m-1] < this->sizofsta/this->sizon)
        {

            this->sta[ ((m-1)*this->sizofsta/this->sizon)+ this->no[m-1]+1] = x ; 
            this->no[m-1]++ ; 
            return true;
        }
        else
        {
            return false ; 
        }
    }

    // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop(int m)
    {
        // Write your code here.
        if(this->no[m-1]==-1)
        {
            return -1 ; 
        }
        else
        {
            int num  = this->sta[ ((m-1)*this->sizofsta/this->sizon) + this->no[m-1]] ;
            this->no[m-1]-- ;  
            return num ; 
        }
    }
};

int main()
{
    NStack* obj = new NStack(3,6) ;
    int x  = obj->pop(2) ;
    bool param_1 = obj->push(8,2);
     param_1 = obj->push(1,2);
     param_1 = obj->push(25,2);
     param_1 = obj->push(41,3);
     param_1 = obj->push(20,2);
     param_1 = obj->push(17,2);
     x  = obj->pop(2) ;
     x  = obj->pop(2) ;
     x  = obj->pop(2) ;
    return 0 ;

}