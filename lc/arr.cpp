#include<bits/stdc++.h>
using namespace std;

pair<int, int> f(string s) {
    /*
    LSS = longest symmetric substring
    Returns (length of LSS, start index of LSS)
    */
    int n = s.length();
    vector<int> a(n, -1); // a[i] = closest '(' to the left of i, inclusive
    int b = -1;
    set<int> c; // index of all '?'
    for (int i = 0; i < n; i++) {
        if (s[i] == '<') {
            b = i;
        } else if (s[i] == '?') {
            c.insert(i);
        }
        a[i] = b;
    }

    int d = 0, e = -1;
    vector<int> g(n, 0); // g[i] = length of LSS starting from i, including it
    for (int i = n - 2; i >= 0; i--) {
        if (s[i] == '>') { // do not bother
            g[i] = 0;
            continue;
        }
        int h = g[i + 1];
        if (i + h + 1 < n && (s[i + h + 1] == '?' || s[i + h + 1] == '>')) { // leverage symmetry of neighbor to extend
            g[i] = h + 2; // +2 bc of index i and character to right
            if (g[i] > d) { // update result
                d = g[i];
                e = i;
            }
        } else if (s[i + h - 1] == '?' || s[i + h - 1] == '>') { // can be nb length
            int j = h / 2; // how many '(' / '?' in the first half
            int k = i + j - 1;
            if (a[i + h - 1] == k || c.count(k)) {
                g[i] = h;
            } else { // pretty sure if we can't do at least h, it's 0
                g[i] = 0;
            }
        } else { // definitely 0
            g[i] = 0;
        }
    }

    return {d, e};
}

void p(string s, int h, int i) {
    cout << "--------" << endl;
    cout << "Input: " << s << endl;
    cout << "Answer: " << h << endl;
    if (h) {
        cout << "Substring: " << s.substr(i, h) << " starting at index " << i << endl;
    } else {
        cout << "No symmetric substring found" << endl;
    }
    return;
}

int main() {
    vector<string> j = {
        // "<><??>>",
        // "<>?<??>>",
        // "<><<??>>",
        // "<>",
        // "<<<>>>",
        // "??????",
        // "?????",
        // "?",
        // "><",
        // ">",
        // "<",
        // "<<<???<???????>>>>",
        // "<><>?????><??>",
        // "??????>>",
        "",
        "????",
        "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>"

    };
    for (int k = 0; k < j.size(); k++) {
    string s = j[k];
    pair<int, int> result = f(s);
    int h = result.first;
    int i = result.second;
    p(s, h, i);
}
    return 0;
}