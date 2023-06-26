//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
       
   typedef struct {
            char cha ; 
            int f ; 
        }ele ; 
        ele elee[26] ; 
        for(int i  = 0 ; i < 26  ;i++)
        {
            elee[i].cha = char(i+65);
            elee[i].f = 0  ; 
        }
        for( int i  = 0 ; i < str.length() ; i++)
        {
            if(isalpha(str[i]))
            {
                int    letter = int(toupper(str[i])) - 65 ; 
                elee[letter].f++ ; 
            }
        }
        ele m ; 
        m.cha = 'A' ; 
        m.f = 0  ; 
        for( int i  = 0 ; i < 26  ;  i++)
        {
            if(elee[i].f>m.f)
            {
                m.cha = elee[i].cha ; 
                m.f = elee[i].f ; 
            }
        
          
        }
        return tolower(m.cha) ; 
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends