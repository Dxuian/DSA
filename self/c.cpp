#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    int a  ; 
    cin >> a  ; 
    if (a==5)
    {
        for (int i = 0; i < a; i++)
        {
           int stars  = i ; 
            for (int left = 0; left < a-i; left++)
            {
                cout << left+1 << " " ; 
            }
            for ( int howmanystars = 0; howmanystars < (2*stars) ; howmanystars++)
            {
                /* code */
                cout<< "* " ; 
            }
             for (int right = a-i ; right > 0; right--)
            {
                cout << right << " " ; 
            }
            cout << endl ;   
        }
        
    }
}
