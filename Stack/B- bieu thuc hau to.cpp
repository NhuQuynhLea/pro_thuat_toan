#include <bits/stdc++.h>
using namespace std;
int degree(char s)
{
    if (s == '*' || s == '/')
        return 3;
    else if (s == '+' || s == '-')
        return 2;
    else
        return 1;
}
void Solve(string s)
{
    stack<char> q;
    string res = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            res += s[i];
        if (s[i] == '(')
            q.push(s[i]);
        if (s[i] == ')')
        {
            while (q.size() && q.top() != '(')
            {
                res += q.top();
                q.pop();
            }
            q.pop();
        }
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        {
            while (q.size() && degree(s[i]) <= degree(q.top()))
            {
                res += q.top();
                q.pop();
            }
            q.push(s[i]);
        }
    }
    while (q.size())
    {
        if (q.top() != '(')
            res += q.top();
        q.pop();
    }
    cout << res;
}
int main()
{
    string s;
    cin >> s;
    Solve(s);
}