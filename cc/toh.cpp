#include <bits/stdc++.h>
using namespace std;
void re(vector<vector<int>> &b, stack<int> &o, stack<int> &t, stack<int> &th, int n, int tu);
vector<vector<int>> towerOfHanoi(int n);
bool done(stack<int>three, int n ) ; 
bool isafe(int src, int dest, vector<vector<int>> b  ,stack <int> one, stack<int> two, stack<int> three)
{
    stack<int> from, to;
   if (b.size()!=0)
   {
     if (b.back()[0]==dest && b.back()[1]==src)   
    {
     return false  ;    
    }
   }
   
    src == 1 ? from = one : (src == 2 ? from = two : from = three);
    dest == 1 ? to = one : (dest == 2 ? to = two : to = three);
    if (to.size() != 0 && from.size() != 0)
    {
        if (from.top() < to.top())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else if(from.size()==0)
    {
        return false ; 
    }
    else
    {
        return true;
    }
}
bool done(stack<int>three, int n )
{
    if ( three.size()==n && three.top() == 1  ) 
    {
        return true  ; 
    }
    else
    {
        return false  ; 
    }  
}
vector<vector<int>> towerOfHanoi(int n)
{
    vector<vector<int>> b;
    stack<int> o, t, th;
    for (int i = 0; i < n; i++)
    {
        o.push(n - i);
    }
    re(b, o, t, th, n, 0);
    return b;
}
void re(vector<vector<int>> &b, stack<int> &o, stack<int> &t, stack<int> &th, int n, int tu)
{
    vector<int> fi = {1, 2};
    vector<int> se = {1, 3};
    vector<int> thir = {2, 3};
    vector<int> four = {3, 1};
    vector<int> five = {3, 2};
    vector<int> six = {2, 1};
    if (tu == pow(2, n) || n == 0 ||th.size() ==n)
    {
        return;
    }


    if (isafe(1, 3, b, o, t, th))
    {
        th.push(o.top());
        o.pop();
        b.push_back(se);
        re(b, o, t, th, n, tu + 1);
        if(done(th,n)){return ; }
        b.pop_back();
        o.push(th.top());
        th.pop();
    }
    if (isafe(1, 2, b , o, t, th))
    {
        t.push(o.top());
        o.pop();
        b.push_back(fi);
        re(b, o, t, th, n, tu + 1);
        if(done(th,n)){return ; }
        o.push(t.top());
        b.pop_back();
        t.pop();
    }
     if (isafe(3, 2,b, o, t, th))
    {
        t.push(th.top());
        th.pop();
        b.push_back(five);
        re(b, o, t, th, n, tu + 1);
        if(done(th,n)){return ; }
        b.pop_back();
        th.push(t.top());
        t.pop();
    }




    
      if (isafe(2, 1,b, o, t, th))
    {
        o.push(t.top());
        t.pop();
        b.push_back(six);
        re(b, o, t, th, n, tu + 1);
        if(done(th,n)){return ; }
        b.pop_back();
        t.push(o.top());
        o.pop();
    }
     if (isafe(2, 3,b, o, t, th))
    {
        th.push(t.top());
        t.pop();
        b.push_back(thir);
        re(b, o, t, th, n, tu + 1);
        if(done(th,n)){return ; }
        b.pop_back();
        t.push(th.top());
        th.pop();
    }
  
   
     if (isafe(3, 1,b, o, t, th))
    {
        o.push(th.top());
        th.pop();
        b.push_back(four);
        re(b, o, t, th, n, tu + 1);
        if(done(th,n)){return ; }
        b.pop_back();
        th.push(o.top());
        o.pop();
    }

    
   
   
  
}



int main()
{
    vector<vector<int>> c = towerOfHanoi(5);
    for (int i = 0; i < c.size(); i++)
    {
        for (int j = 0; j < c[i].size(); j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}