class Solution {
public:
    string getPermutation(int n, int k) {
        vector<string> a  ; 
        for(int i = 1 ; i <= n ; i++)
        {
            a.push_back(to_string(i)) ; 
        }
        
        int ck  = 1 ;
        string b  = "" ;
        vector<vector<string>> f ; 
        re(b,a,n,0,k,ck,f );
        sort(f.begin(),f.end()) ; 
      

     for (size_t j = 0; j < f[k-1].size(); ++j) {
    for (size_t p = 0; p < f[k-1][j].size(); ++p) {
        b += f[k-1][j][p] ; 
    }
}



        return b ;
    
    }
    void re(string& b ,  vector<string> a  , int n , int in, int k , int& ck ,  vector<vector<string>>& f)
    {
        if(in>=n)
        {
            f.push_back(a) ; 
            return ;  
        }
        for(int i  = in ;  i < a.size() ; i++)
        {
            vector<string> t  =  a ;
            swap(t[in],t[i]) ; 
            re(b,t,n,in+1,k,ck,f) ;
            
        }
    }
};