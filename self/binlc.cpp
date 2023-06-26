#include <bits/stdc++.h>
using namespace std;
int pivotIndex(vector<int> &nums)
{
    //-1 1 2 
    int m = floor((0 + nums.size()) / 2);
    int half  = m  ; 
    while (m >= 0 && m < nums.size())
    {
        int rs, ls, li, ri;
        int mold = m;
        ls = li = rs = 0;
        ri = nums.size()-1;
        while (li < m)
        {
            ls += nums[li];
            li++;
        }
        while (m < ri)
        {
            rs += nums[ri];
            ri--;
        }
        if (rs == ls)
        {
            return m;
            /* code */
        }
        else if (ls < rs)
        {
             if (m==0 || m==nums.size()-1)
            {
                return -1  ; 
            }

            if (nums[m+1]>0)
            {
                m-- ;  
            }
            else
            {
                m++ ; 
            }
            
            // 0 3 -4 3 4 1
            if (mold > m  && m<half)
            {
                return -1;
            }
        }
        else
        {//ls>rs
            // 9 3 -4 3 4 1
            if (m==0 || m==nums.size()-1)
            {
                return -1 ;
            }
            
           if (nums[m+1]>0)
            {
                m++ ;  
            }
            else
            {
                m-- ; 
            }
            if (mold < m  && m>half)
            {
                return -1;
            }
        }
    }
    return -1;
}
int main()
{
    vector<int> a = {-1,-1,-1,-1,-1,0};
    cout << pivotIndex(a);
}