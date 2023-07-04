#include <iostream>
#include <vector>
using namespace std;

void re(vector<vector<int>> &a, int &n, vector<string> &b, string &t, int x, int y);
vector<string> searchMaze(vector<vector<int>> &arr, int n);

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int l;
        cin >> l;
        vector<vector<int>> arr(l, vector<int>(l));
        int num;
        for (int k = 0; k < l; k++) {
            for (int j = 0; j < l; j++) {
                cin >> num;
                arr[k][j] = num;
            }
        }
        vector<string> a = searchMaze(arr, l);
        for (string i : a) {
            cout << i << endl;
        }
    }
    return 0;
}

vector<string> searchMaze(vector<vector<int>> &arr, int n) {
    vector<string> b;
    string t;
    re(arr, n, b, t, 0, 0);
    return b;
}

void re(vector<vector<int>> &a, int &n, vector<string> &b, string &t, int x, int y) {
    if (n == x + 1 && n == y + 1) {
        b.push_back(t);
        return;
    }

    int cant = 4;
    if (y + 1 < n) {
        if (a[y + 1][x] == 1 && t.back() != 'U') {
            t += "D";
            re(a, n, b, t, x, y + 1);
            t.pop_back();
            cant--;
        }
    }
    if (y - 1 > -1) {
        if (a[y - 1][x] == 1 && t.back() != 'D') {
            t += "U";
            re(a, n, b, t, x, y - 1);
            t.pop_back();
            cant--;
        }
    }
    if (x + 1 < n) {
        if (a[y][x + 1] == 1 && t.back() != 'L') {
            t += "R";
            re(a, n, b, t, x + 1, y);
            t.pop_back();
            cant--;
        }
    }
    if (x - 1 > -1) {
        if (a[y][x - 1] == 1 && t.back() != 'R') {
            t += "L";
            re(a, n, b, t, x - 1, y);
            t.pop_back();
            cant--;
        }
    }
    if (cant == 0) {
        return; // backtrack condition
    }
}