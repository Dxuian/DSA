#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string removeOccurrences(string s, string part)
    {
        int i = 0;
        string c;
        while (i <= s.length())
        {

            if (c.length() >= part.length())
            {
                if (c.substr(c.length() - part.length(), part.length()) == part)
                {
                    for (int j = 0; j < part.length(); j++)
                    {
                        c.pop_back();
                    }
                }
            }
            if (i == s.length())
            {
                return c;
            }
            c += s[i];
            i++;
        }
        return c;
    }
};

int main()
{
    vector<char> a = {'a', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b'};
    Solution s;
    s.compress(a);
}