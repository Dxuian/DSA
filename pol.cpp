// vector<int> nextSmallerElement(vector<int> &arr, int n)
// {
//     // Write your code here.
//     // vector<int> a(arr.size(),-1) ;
//     for(int i = 0 ; i  <  arr.size() ; i++)
//     {
//         bool ax  =  false  ;
//         for(int j = i+1 ; j< arr.size() ; j++)
//         {
//             if(arr[i]>arr[j])
//             {
//                 arr[i] = arr[j] ;
//                 ax =  true  ;
//                 break ;
//             }
//         }
//         if(ax==false)
//         {
//             arr[i] =  -1  ;
//         }
//     }
//     return arr ;
// }
#include <bits/stdc++.h>
using namespace std;
int ch(stack<pair<int, int>> &a, int aa, int index);
vector<int> nextSmallerElement(vector<int> &arr, int n) {
  stack<pair<int, int>> a;
  for (int i = arr.size() - 1; i > 0; i--) {
    if (arr[i - 1] > arr[i]) {
      a.push(make_pair(arr[i], i));
      // cout<<arr[i]<<" "<<i<<endl ;
    }
  }
  // cout<<"okdone"<<endl ;

  for (int i = 0; i < arr.size(); i++) {
    arr[i] = ch(a, arr[i], i);
  }
  return arr;
}
int ch(stack<pair<int, int>> &a, int aa, int index) {
  vector<pair<int,int>> x;
  
  if ( a.size()!=0 && (index == a.top().second)) {
    a.pop();
  }
    int pll = a.size() , ol =  -10;

  for (int i = 0; i < pll; i++) {
    if (a.top().first < aa) {
        ol=a.top().first ;
        break ; 
    //   return a.top().first;
    }
    x.push_back(a.top());
    a.pop();
  }
  
  int l = x.size();
  for (int i = 0; i < l; i++) {
    a.push(x[x.size() - 1]);
    x.pop_back();
  }
  if(ol!=-10){
        return ol ;
  }
  return -1;
}
int main() {
  vector<int> arr = {1,2,3,3,2,1};
  vector<int> a = nextSmallerElement(arr, 4);
  for (int i = 0; i < a.size(); i++) {
    cout << a[i] << " ";
  }
  return 0;
}
