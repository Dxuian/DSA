#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int mt = 0 , nt  = 0 , temp  = 0  ;
        if (nt==n)
        {
            return  ; 
        } 
        int mf = nums1[mt] ;
        int nf = nums2[nt]; 
        int k = 0 ; 
        vector<int> a ;
        while (k<m+n)
        {
            if(mf<nf)
            {
                a.push_back(mf) ; 
                mt++ ; 
                k++ ; 
                    if(mt>=m){continue;}
                 mf = nums1[mt] ;
            }
            else if (mf>nf)
            {
                a.push_back(nf) ; 
                nt++ ; 
                k++ ; 
                if(mt>=n){continue;}
                nf = nums2[nt]; 
            }
            else
            {
                a.push_back(mf) ; 
                mt++ ; 
                k++ ; 
                                    if(mt>=m){continue;}
                 mf = nums1[mt] ;       
            }
            /* code */
        }
        
        

        

        
    }



};

int main()
{
    Solution x;
    vector<int> nums1 = {0};
    vector<int> nums2 = {1};

    int n = nums2.size();
    int m = nums1.size() - n;
    x.merge(nums1, m, nums2, n);
    return 0;
}