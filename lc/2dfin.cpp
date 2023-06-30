#include<bits/stdc++.h>
using namespace std ;
class Solution {
  public: bool searchMatrix(vector < vector < int >> & matrix, int target) {


    int i = 0,n =  matrix[0].size();
    int j = 0;
    while (i < matrix.size()) {
      
      while (j < n) {
        if(j<0||j>n || i<0 || i>matrix.size()-1) 
        {
          cout<<"nf"<<endl ;
         return false ;
        }
        // if(i)
        // {
        //   cout<<"heres i, j : "<<i<<"increasing i  "<<j<<endl ; 
        //   i++;
        //   break;
        // }
        if (j == matrix[0].size() - 1 && matrix[i][j] < target) {
           cout<<"heres i, j : "<<i<<"increasing i  "<<j<<endl ; 
          i++;
          break;
        }
        if (matrix[i][j] < target && matrix[i][j+1] <= target) {
           cout<<"heres i, j : "<<i<<" increaseing j  "<<j<<endl ; 
                          j++;
          continue ;
        } 
        else if (matrix[i][j] == target) {
              cout<<"found"<<matrix[i][j]<<endl ; 
          return true;
        } 
        else if (matrix[i][j] < target && matrix[i][j+1] > target) {
           cout<<"heres i, j : "<<i<<" increasing i cuz its in mid of stuff"<<j<<endl ; 
          i++;
          break;
        }
        else if(matrix[i][j]>target) 
        {
          cout<<"heres i, j : "<<i<<" its behind brh"<<j<<endl ; 
          j--;
         
        }
      }

    }
    // cout<<"notfound"<<endl ;
    return false;

  }
};
int main()
{
    Solution x  ; 
    // vector<vector<int>> a ={
    //                         { 1,4, 7,11,15},
    //                         { 2,5, 8,12,19},
    //                         { 3,6, 9,16,22},
    //                         {10,13,14,17,24},
    //                         {18,21,23,26,30}};
    // cout<<x.searchMatrix(a,17)<<endl ;
    // cout<<x.searchMatrix(a,12)<<endl ;
    // cout<<x.searchMatrix(a,1444)<<endl ;
    // cout<<x.searchMatrix(a,30)<<endl ;
    // cout<<x.searchMatrix(a,26)<<endl ;
    // cout<<x.searchMatrix(a,19)<<endl ;
    // cout<<x.searchMatrix(a,2)<<endl ;
    // cout<<x.searchMatrix(a,4)<<endl ;
    vector<vector<int>> a ={{{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}}};
    cout<<x.searchMatrix(a,5)<<endl ;
}