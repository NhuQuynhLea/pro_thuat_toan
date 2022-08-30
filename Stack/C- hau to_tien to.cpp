#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    stack<string> q;
    for (int i = 0; i <= s.size(); i++)
    {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        {
            string a = q.top();
            q.pop();
            string b = q.top();
            q.pop();
            string tmp = s[i] + b + a;
            q.push(tmp);
        }
        else
            q.push(string(1, s[i]));
        if (i == s.size() - 1)
            cout << q.top() << "\n";
    }
}