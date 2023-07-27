#include<bits/stdc++.h>
using namespace std ; 

bool c( string& o,  string& t) ;
string solution(vector<string>& A) {
    int le = A.size();
    vector<bool> l(le, false);
    l[0] = true;

    for (int i = 1; i < le; i++) {
        for (int j = i - 1; j >= 0; j--) {
            if (l[j] && c(A[j], A[i])) {
                l[i] = true;
                break;
            }
        }
    }

    string ans;
    for (int i = 0; i < le; i++) {
        ans += l[i] ? '1' : '0';
    }

    return ans;
}
bool c( string& o,  string& t) {
    return o[1] == t [0];
}