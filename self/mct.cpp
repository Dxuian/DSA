#include <iostream>
#include <vector>
using namespace std;

bool can_connect(string& s1, string& s2) {
    return s1[1] == s2[0];
}

string solution(vector<string>& A) {
    int n = A.size();
    vector<bool> can_reorder(n, false);
    can_reorder[0] = true;

    for (int i = 1; i < n; i++) {
        for (int j = i - 1; j >= 0; j--) {
            if (can_reorder[j] && can_connect(A[j], A[i])) {
                can_reorder[i] = true;
                break;
            }
            else if (j == 0 && !can_reorder[j]) {
                return "0";
            }
            else if (j == 0 && can_reorder[j]) {
                can_reorder[i] = false;
                break;
            }
        }
    }

    string result;
    for (int i = 0; i < n; i++) {
        result += can_reorder[i] ? '1' : '0';
    }

    return result;
}

int main() {
    vector<string> A = {"he", "ll", "lo", "el"};
    cout << solution(A) << endl; // should output "1001"

    A = {"ab", "ba", "bq"};
    cout << solution(A) << endl; // should output "111"

    A = {"ee", "ea", "eg"};
    cout << solution(A) << endl; // should output "110"

    return 0;
}