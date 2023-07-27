#include<bits/stdc++.h>
using namespace std;
int solution(vector<int> friends) {
    vector<vector<int>> a(friends.size())   ; 
    for(int i = 0 ; i < friends.size() ; i++)
    {
        vector<int> b = {i,2,true} ; 
        a[i] = b ; 
    }
    int no = friends.size() ;
    for(int j = 0 ; j < friends.size() ; j++)
    {
        if(j==friends[j])
        {
            continue ; 
        }
       if( a[friends[j]][1] >0 &&  a[j][1]>0  && a[j][2] == true)
       {
            a[friends[j]][1]-- ; 
            a[j][1]-- ; 
            if(friends[friends[j]]==j)
            {
                a[friends[j]][2] = false ; 
                //  a[friends[j]][1]++ ; 
                //     a[j][1]++ ;
            }
            continue ; 
       }
       if(a[friends[j]][1] >0 &&  a[j][1]>0  && a[j][2] == false)
       {
           continue ; 
       }
       no-- ; 
    }
    for( int j = 0 ; j < a.size() ; j++)
    {
        for(int i =  0 ; i < a[j].size() ; i++)
        {
            cout<<a[j][i]<<" " ; 
        }
        cout<<endl ; 
    }
    return no ; 
}
int main()
{
   vector<int> a  = {1, 2, 0, 4, 3, 5, 6, 8, 7} ; 
    cout<<solution(a) ;

}