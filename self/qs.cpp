#include <bits/stdc++.h>
using namespace std;
//this is quicksort
//make the first(or any) element as pivot
//then count the number of elements smaller than pivot  ahead of it
//replace the pivot with the element at the position such that it is ahead of left by the number of elements smaller than it
//recursively call the function for left and right of the pivot
void qs(vector<int>& a, int l, int r) {
    if (l >= r) return;

    int s = a[l], it = l, no = l;

    while (it <= r) {
        if (a[it] < s) {
            no++;
        }
        it++;
    }
    // 5 4 3 2 1 6 7 8 9
   
    
    
     swap(a[no], a[l]);

     int i = l, j = r;
    while (i<=j && j>no && i<no )
    {
        if(a[i]>=a[no] && a[j]<=a[no])
        {
            swap(a[i],a[j]) ;
            i++ ;j--;
        }
        else if(a[i]>=a[no] && a[j]>=a[no])
        {
           j-- ; 
        }
        else if(a[i]<=a[no] && a[j]<=a[no])
        {
            i++ ; 
        }
        else if(a[i]<=a[no] && a[j]>=a[no])
        {
            i++ ; j-- ; 
        }      
        
       
    }

    qs(a, l, no-1 );
    qs(a, no+1, r);
}

int main() {
    // vector<int> a = {-84, -50, -80, -83, -76, -39 ,-31, -29, -24, -14 ,24 ,57 ,72 ,-83, -85, -40, 37, -80 ,-96, -7 ,39 ,50, 62 ,84};
    vector<int> a = {9 ,9 ,9 ,8 ,2 ,3 ,-6 };
    qs(a, 0, a.size() - 1);

    for (int i : a) {
        cout << i << endl;
    }

    return 0;
}
