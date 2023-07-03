#include<bits/stdc++.h>
using namespace std;
class Solution {
    public: vector < string > letterCombinations(string digits) {
        vector < string > l = {
            "",
            "abc",
            "def",
            "ghi",
            "jkl",
            "mno",
            "pqrs",
            "tuv",
            "wxyz"
        };
        vector < string > s;
        string temp = "";
        re(l, s, digits, temp, 0, 0);
        return s  ; 
    }

void re(vector < string > & l, vector < string > & s,string d,  string & t,int k,  int p) {

        if( k==d.length()  )
        {
                s.push_back(t) ; 
                return  ; 
        }
        int di1 = int(d[k]) -48 ;
        // int kble =  l[k+1].length() ; 
        int kble = l[di1 -1 ].length() ;
        for(int i = 0 ; i < kble ; i++)
        {
            int di  =  int(d[k]) -48 ; 
            char pbc = l[di-1][p] ; 
            t+=pbc ; 
            re(l,s,d,t,k+1,0)  ;
            t.pop_back()  ;
            p++ ;  
        }

}
} ; 
int main()
{
    string a = "7" ;
    Solution x ;
    vector<string> b = x.letterCombinations(a) ;    
    for(auto i : b)
    {
        cout<<i<<endl ; 
    }
}