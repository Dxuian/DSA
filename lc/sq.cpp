#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maximalSquare(vector<vector<char>> &matrix)
    {
        // if (matrix.size() == 1)
        // {
        //     for (int i = 0; i < matrix[0].size(); i++)
        //     {
        //         if (matrix[0][i] == '1')
        //         {
        //             return 1;
        //         }
        //     }
        //     return 0;
        // }
        // if (matrix[0].size() == 1)
        // {
        //     for (int i = 0; i < matrix[0].size(); i++)
        //     {
        //         if (matrix[i][0] == '1')
        //         {
        //             return 1;
        //         }
        //     }
        //     return 0;
        // }
        vector<vector<int>> dp(matrix.size(), vector<int>(matrix[0].size(), 0));
        int y = (re(matrix, dp, 0, 0, 0) - 1);
        return y * y;
    }
    int re(vector<vector<char>> &m, vector<vector<int>> &dp, int j, int i, int c)
    {
        if (i >= m[0].size() || j >= m.size())
        {
            if (j >= m.size())
            {
                return c;
            }
            return re(m, dp, j + 1, 0, c);
        }
        int x = 0;
        if (m[j][i] == '1')
        {   int l  ;
            c!=0?l=1:l=c;
            x = checkq(m, j, i, l, true, dp);
        }
        if (x == 0)
        {
            return re(m, dp, j, i + 1, c);
        }
        for (int p = 0; p < x-1; p++)
        {
            dp[j + p][i] = 1;
        }
        x == 0 ? x++ : x = x;
        if (x > c)
        {
            c = x;
        }
        return re(m, dp, j, i + x, c);
    }
    int checkq(vector<vector<char>> &m, int j, int i, int l, bool t, vector<vector<int>> &dp)
    {
        if (t == false)
        {
            return l;
        }
        if (dp[j][i] == 1)
        {
            return 1;
        }
        int x = 1, y = 1;
        for (int k = 0; k < l + 1; k++)
        {
            if (j + l >= m.size() || i + k >= m[0].size())
            {

                x = 0;
                break;
            }
            if (m[j + l][i + k] != '1')
            {
                x = 0;
                break;
            }
        }
        for (int k = 0; k < l; k++)
        {
            if (i + l >= m[0].size() || j + k >= m.size())
            {

                x = 0;
                break;
            }
            if (m[j + k][i + l] != '1')
            {
                y = 0;
                break;
            }
        }
        if (y == 1 && x == 1)
        {
            return checkq(m, j, i, l + 1, true, dp);
        }
        return checkq(m, j + 1, i + 1, l + 1, false, dp);
    }
};

int main()
{
    vector<vector<char>> a = {{'1', '1', '1', '0', '0'},
                              {'1', '1', '1', '0', '0'},
                              {'1', '1', '1', '1', '1'},
                              {'0', '1', '1', '1', '1'},
                              {'0', '1', '1', '1', '1'},
                              {'0', '1', '1', '1', '1'}};
    Solution x;
    cout << x.maximalSquare(a);
    return 0;
}