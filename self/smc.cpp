#include <bits/stdc++.h>
using namespace std;

void re(vector<string> &A, int p, string &b);
string solution(vector<string> &A)
{
    string b = "";
    re(A, 0, b);
    return b;
}
void re(vector<string> &A, int p, string &b)
{
    if (p == A.size())
    {
        return;
    }
    if (p == 0)
    {
        b += "1";
       
    }
    else
    {
        if (A[p].front() == A[p - 1].back())
        {
            b += "1";
        }
        else
        {
            int k = 0;
            for (int i = p+1; i < A.size(); i++)
            {

                if (A[p].front() == A[i].back())
                {
                    b += "1";
                    swap(A[p], A[i]);
                    swap(A[p + 1], A[i]);
                    k = 1;
                    p++ ; 
                }
            }
            if (k == 0)
            {
                b += "0";
            }
           
        }
      
    }
      re(A, p + 1, b);
}
int main()
{
    vector<string> A = {"he", "ll", "lo", "el"};
    cout << solution(A) << endl; // should output "1001"

    A = {"ab", "ba", "bq"};
    cout << solution(A) << endl; // should output "111"

    A = {"ee", "ea", "eg"};
    cout << solution(A) << endl; // should output "110"

    return 0;
}