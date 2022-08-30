#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    stack<char> L;
    stack<char> R;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '>')
        {
            if (R.size())
            {
                L.push(R.top());
                R.pop();
            }
        }
        else if (s[i] == '<')
        {
            if (L.size())
            {
                R.push(L.top());
                L.pop();
            }
        }
        else if (s[i] == '-')
        {
            if (L.size())
                L.pop();
        }
        else
            L.push(s[i]);
    }
    while (R.size())
    {
        L.push(R.top());
        R.pop();
    }
    stack<char> tmp;
    while (L.size())
    {
        tmp.push(L.top());
        L.pop();
    }
    while (tmp.size())
    {
        cout << tmp.top();
        tmp.pop();
    }
}