#include <bits/stdc++.h>
#include <chrono>
using namespace std;

void re(vector<vector<int>> &a, int &n, vector<string> &b, string &t, int x, int y);
vector<string> searchMaze(vector<vector<int>> &arr, int n);
vector<string> searchMaze(vector<vector<int>> &arr, int n)
{
    // Write your code here
    vector<string> b;
    string t;
    re(arr, n, b, t, 0, 0);
    return b;
}
void re(vector<vector<int>> &a, int &n, vector<string> &b, string &t, int x, int y)
{
    if (n == x + 1 && n == y + 1)
    {
        b.push_back(t);
        return;
    }

    int cant = 4;
    if (y + 1 < n)
    {
        if (a[y + 1][x] == 1 && t.back() != 'U')
        {
            t += "D";
            re(a, n, b, t, x, y + 1);
            t.pop_back();
            cant--;
        }
    }
    if (y - 1 > -1)
    {
       

        if (a[y - 1][x] == 1 && t.back() != 'D')
        {
            t += "U";
            re(a, n, b, t, x, y - 1);
            t.pop_back();
            cant--;

        }
    }
  

    if (x + 1 < n)
    {
       
        if (a[y][x + 1] == 1 && t.back() != 'L')
        {
            t += "R";
            re(a, n, b, t, x + 1, y);
            t.pop_back();
            cant--;

        }
    }
   
    if (x - 1 > -1)
    {
      
        if (a[y][x - 1] == 1 && t.back() != 'R')
        {
            t += "L";
            re(a, n, b, t, x - 1, y);
            t.pop_back();
            cant--;

        }
    }
  
    if (cant == 0)
    {
        return; // backtrack condition
    }
}

int main()
{

    vector<vector<int>> a ={{1, 0, 0, 0},
                               {1, 1, 0, 1},
                               {1, 1, 0, 0},
                               {0, 1, 1, 1}};
                                 auto start = std::chrono::high_resolution_clock::now();

    vector<string> c = searchMaze(a, 4);
   
    for (auto x : c)
    {
        cout << x << endl;
    }
     auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    cout << duration.count() << endl;
    return 0;
}