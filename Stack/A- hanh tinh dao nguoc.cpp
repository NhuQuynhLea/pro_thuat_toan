#include <bits/stdc++.h>
#include <ctype.h>
using namespace std;
stack<char> q;
int main()
{
    string s;
    cin >> s;
    vector<long long> v;
    for (long long i = 0; i < s.size(); i++)
    {
        if (isalpha(s[i]))
            q.push(s[i]);
        else
            v.push_back(s[i] - '0');
    }
    while (q.size())
    {
        cout << q.top();
        q.pop();
    }
    cout << "\n";
    for (long long i = 0; i < v.size(); i++)
        cout << v[i];
}