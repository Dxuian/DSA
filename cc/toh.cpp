#include <bits/stdc++.h>
using namespace std;
void helper(int n, int src, int des, int aux, vector<vector<int>> &ans) ; 
vector<vector<int>> towerOfHanoi(int n) ; 
void helper(int n, int src, int des, int aux, vector<vector<int>> &ans)

{

    if(n==0)

        return;

     helper(n-1, src, aux, des, ans);

    ans.push_back({src, des});

    helper(n-1, aux, des, src, ans);

}

vector<vector<int>> towerOfHanoi(int n)

{

    //    Write your code here.

    vector<vector<int>> ans;

    helper(n,1,2,3,ans);

    return ans;

}
int main()
{
    vector<vector<int>> c = towerOfHanoi(3);
    for (int i = 0; i < c.size(); i++)
    {
        for (int j = 0; j < c[i].size(); j++)
        {
            cout << c[i][j];
            if(j != c[i].size() - 1) cout << "-";
        }
        cout << endl;
    }
    return 0;
}