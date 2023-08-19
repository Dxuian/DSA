#include<bits/stdc++.h>
using namespace std;
class kq
{
private:
    vector<int> x  ; 
     vector<int> f  ; 
     vector<int> n  ; 
    vector<int> r  ; 
    int fs = 0 ; 
public:
    kq()
    {
        x  =  {0,0,0,0,0,0} ; 
        n  = {1,2,3,4,5,-1};
        f = {-1,-1,-1} ; 
        r = {-1,-1,-1} ; 
       
    }
    bool eq(int no , int data)
    {
        if(fs==-1)
        {
            return false  ; 
        }
        if (f[no]==-1)
        {
            f[no] = fs ;
            
        }
       
         r[no] = fs ;        
        x[fs] = data ; 
        fs = n[fs] ; 
        return true   ; 
    }
    int dq(int no)
    {
        int xx  ,pos; 
        if (f[no]==-1)
        {
            return -1   ; 
        }
        pos =  f[no] ; 
        if(f[no]==r[no])
        {
           
            xx = x[f[no]] ;
            f[no]=-1 ; 
            r[no]=-1 ; 
        }
        else
        {
            xx  =  x[f[no]] ; 
            x[f[no]] =  0 ; 
            f[no] = n[f[no]] ; 
        }
        int h  = fs ; 
        fs =  pos ; 
        n[fs] =  h;
       return  xx ; 
    }
    int get(int no)
    {
        if (f[no]==-1)
        {
            return -1 ; 
        }
        return x[f[no]] ; 
    }
   
};

int main()
{
    kq a ;
    a.eq(0,13) ;
    cout<<a.get(0) ;
    a.eq(0,23) ;
    a.eq(0,34) ;
    a.eq(1,465) ;
    cout<<a.get(0) ;
    a.eq(1,57) ;
    a.eq(1,67) ;
    cout<<a.get(1) ;
    a.eq(2,78) ;
    a.dq(0) ;
    a.dq(0) ;
    a.dq(0) ;
    a.dq(0) ;
    a.dq(1) ;
    return true; 
}