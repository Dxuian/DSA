#include <bits/stdc++.h> 
using namespace std ; 
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)

{
    //Write your code here

    int i =0, c = nRows , r = mCols ; 
    //i,j 
    cout<<c<<r<<"da"<<endl ; 
     int j  = 0 ;
    while(  j  < r )
    {
        // cout<<i<<j<<"i,j"<<j%2<<endl ; 
        while( j%2==0 && i<c)
        {
           
            cout<<arr[i][j]<<" " ; 
             i++ ; 
            
        }
        //  cout<<i<<j<<"i,j"<<j%2<<endl ; 
        //  bool x   = ( j%2==1 && i>0) ; 
        //  cout<<x<<endl ; 
        while( j%2==1 && i>0)
        {  i--; 
            cout<<arr[i][j]<<" " ; 
          
        }
        j++ ; 
    }
    vector<int> cx= {13123,123123} ; 
    return cx ; 
}
int main()
{
    vector<vector<int>> a  = {{1 ,2, 3 ,4 } , 
{5, 6, 7 ,8 },
{9 ,10 ,11 ,12}
}; 
wavePrint(a,3,4) ; 
}