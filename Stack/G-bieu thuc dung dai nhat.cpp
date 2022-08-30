#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    stack<char> q;
    int dem = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
            q.push(s[i]);
        else
        {
            if (q.size())
            {
                q.pop();
                dem += 2;
            }
        }
    }
    cout << dem;
}