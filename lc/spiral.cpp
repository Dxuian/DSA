#include<bits/stdc++.h>
using namespace std ;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int h = matrix.size() , v = matrix[0].size() ; 
    int ti = h*v ; 
    vector<int> a  ; 
    int i = 0 , j = 0 , iter = 0 ,   rf=h , bf = v , uf= -1 ,lf=-1 , m=0 ; 
    cout<<i<<j<<lf<<rf<<uf<<bf<<endl ; 
    while( iter < ti )
    {
        cout<<i<<j<<lf<<rf<<uf<<bf<<endl ; 
        while(j<rf && m==0)
        {
            a.push_back(matrix[i][j]) ; 
            j++ ;
            iter++ ; 
            if(i==rf){uf++;} 
        }
            cout<<i<<j<<lf<<rf<<uf<<bf<<endl ; 

        while(i<bf && m==1)
        {
            a.push_back(matrix[i][j]) ; 
            i++ ;
            iter++ ; 
            if(i==bf){bf--;} 
        }
            cout<<i<<j<<lf<<rf<<uf<<bf<<endl ; 

        while(j>lf && m==0)
        {
            a.push_back(matrix[i][j]) ;
            j-- ;  
            iter++  ;
            if(i==lf){lf++;} 
        }
            cout<<i<<j<<lf<<rf<<uf<<bf<<endl ; 

        while(i>uf && m==1)
        {
            a.push_back(matrix[i][j]) ; 
            i-- ; 
            iter++ ; 
            if(i==uf){uf++;} 
        }
            cout<<i<<j<<lf<<rf<<uf<<bf<<endl ; 

    }
    return a  ; 
    }
};
int main()
{
    Solution x  ; 
    vector<vector<int>> a ={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    vector<int> b = x.spiralOrder(a) ;
}