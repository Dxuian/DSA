#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void solveSudoku(vector<vector<char>> &board)
    {
        re(board, 0, 0);
    }
    void re(vector<vector<char>> &b, int j, int i)
    {
        // if (i >= 9) {
        // //   cout << "nextline" << endl;
        //   if (j >= 9) {
        //     // cout << "over" << endl;
        //     return;
        //   }
        // //   cout << "stnl" << endl;
        //   re(b, j + 1, 0);
        // }
        for (int ss = 0; ss < 9; ss++)
        {
            for (int spss = 0; spss < 9; spss++)
            {
                if (b[ss][spss] == '.')
                {
                    vector<char> a = which(b, i, j);
                    if (a.size() == 0)
                    {
                        return;
                    }
                }
            }
        }

        // if (b[j][i] != '.') {
        // //   cout << "isnum" << b[j][i] << endl;
        //   re(b, j, i + 1);
        // }
        // // cout << "here" << b[j][i] << endl;

        // for (int ia = 0; ia < a.size(); ia++) {
        //   b[j][i] = a[a.size() - ia - 1];
        // //   if (i==7 && j==2)
        // //   {
        // //     //print b
        // //     for (int sss = 0; sss < b.size(); sss++)
        // //     {
        // //         for (int ssss = 0; ssss < b[0].size(); ssss++)
        // //         {
        // //             cout << b[sss][ssss] << " ";
        // //         }
        // //         cout << endl;
        // //     }
        // //   }

        //   re(b, j, ia + 1);
        // }
        return;
    }

    vector<char> which(vector<vector<char>> &b, int ix, int jy)
    {
        vector<char> digits = {
            '1',
            '2',
            '3',
            '4',
            '5',
            '6',
            '7',
            '8',
            '9'};
        // cout << "hi" << endl;
        for (int i = 0; i < b[0].size(); i++)
        {
            if (b[jy][i] != '.')
            {
                int l = 0;
                while (l < digits.size())
                {
                    if (b[jy][i] == digits[l])
                    {

                        digits.erase(digits.begin() + l);
                        l = 0;
                        break;
                    }
                    else
                    {
                        l++;
                    }
                }
            }
        }
        // cout << "herea" << endl;
        // for (char iss: digits) {
        //   cout << iss << endl;
        // }
        // cout << "ad" << endl;

        for (int is = 0; is < b.size(); is++)
        {
            if (b[is][ix] != '.')
            {
                int l = 0;
                while (l < digits.size())
                {
                    if (b[is][ix] == digits[l])
                    {
                        digits.erase(digits.begin() + l);
                        l = 0;
                        break;
                    }
                    else
                    {
                        l++;
                    }
                }
            }
        }

        int xm = floor(ix / 3);
        int ym = floor(jy / 3);
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < digits.size(); k++)
                {
                    if (b[(ym * 3) + i][(xm * 3) + j] == digits[k])
                    {
                        digits.erase(digits.begin() + k);
                    }
                }
            }
        }

        return digits;
    }
};

int main()
{
    vector<vector<char>> a = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};
    Solution x;
    x.solveSudoku(a);
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}