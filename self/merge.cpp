#include<bits/stdc++.h>
using namespace std;
void mer(vector<int> &a, int  l , int r );
void merge(vector<int> &a,int l , int r)
{
    int m  = floor((l+r)/2); 
    queue<int> b ; 
    int i = l , t= l ;  // Index for arr1
    int j = m+1 , p = m+1;
    queue<int> c ; 
    while (j<=r)
    {
        c.push(a[j]) ; 
        j++ ; 
        /* code */
    }
    //5 6 7 8 9 1 2 3 4 
    while(i<=m && c.size()>0)
    {
        b.push(a[t]) ; 
        if (b.front()>c.front())
        {
            a[t] = c.front() ; 
            t++;
            c.pop() ; 
        }
        else if(b.front()<=a[j])
        {
            i++; t++ ; 
            b.pop() ; 
        }
    }
    while(c.size()>0 && b.size()==0 && t<=r)
    {
        a[t] = c.front() ; 
        t++ ; 
        c.pop() ; 
    }
    while (c.size()==0 && b.size()>0 && t<=r)
    {
        b.push(a[t]) ; 
       a[t] = b.front() ; 
       t++ ;
       b.pop() ; 
    }
    
    



    // Merge the arrays by comparing elements
    // while (i <= m && j <= r) {
    //     if (a[i] <= a[j]) {
    //         merged.push_back(a[i]);
    //         i++;
    //     } else {
    //         merged.push_back(a[j]);
    //         j++;
    //     }
    // }
    // // Copy remaining elements from arr1, if any
    // while (i < a.size()) {
    //     merged.push_back(a[i]);
    //     i++;
    // }
    // // Copy remaining elements from arr2, if any
    // while (j < a.size()) {
    //     merged.push_back(a[j]);
    //     j++;
    // }
    return ;
}
    // l to m and m+1  to r  ; 
    //1 8 9   ,, 2  4 6
    // queue<int> b ; 
    // int i = l ; int j = m+1 , t = l ; 
    // while(t<r)
    // {
    //     b.push(a[i]) ; 
    //     if(b.front()>a[j] && i!=j )
    //     {
    //         swap(a[i],a[j])  ;
    //         t++ ;i++ ; j++ ;  
    //     }
    //     else if (b.front()<=a[j] && i!=j)
    //     {
    //         t++ ; 
    //         i++ ; 
    //         b.pop() ; 
    //     }
    //     else if(i==j)
    //     {
    //         j++ ; 
    //     }
    // }
    // while(i<m && j<r)
    // {
    //      b.push(a[i])  ;
    //     if(b.front()>a[j])
    //     {
    //         swap(a[i],a[j]) ; 
    //         i++ ; j++ ; 
    //     }
    //     else if(b.front()<=a[j])
    //     {
    //         i++ ; 
    //         b.pop() ; 
    //     }
    // }
    // while(b.size()!=0 && j<r)
    // {
    //     if(b.front()>a[j])
    //     {
    //         swap(a[i],a[j]) ; 
    //         i++ ; j++ ; 
    //     }
    // }
    // while(j<r)
    // {
    //     a[i] = a[j] ; 
    //     i++ ; j++ ; 
    // }
//    return  ; 
// }
void mer(vector<int> &a, int  l , int r )
{
    if (l==r)
    {
        return ; 
    }
    
   mer(a,l,floor((l+r)/2));
   mer(a,floor((l+r)/2)+1,r);  
   merge(a,l,r) ; 
   
}

int main()
{
  vector<int> a   = {100,99,98,97,96,95,94,93,92,91,90,89,88,87,86,85,84,83,82,81,80,79, 78,77,76,75,74,73,72,71,70,69,68,67,66,65,64,63,
  62,61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,
  27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1
  };  
  int r =  a.size() -1 ; 
  int m = floor((r)/2) ; 
    mer(a , 0 , r) ; 
    for(int i:a)
    {
        cout<<i<<endl ;
    }
}