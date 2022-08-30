#include <bits/stdc++.h>
using namespace std;
string s1, s2;
string trai(string s)
{
    swap(s[0], s[1]);
    swap(s[3], s[4]);
    swap(s[0], s[4]);
    return s;
}
string phai(string s)
{
    swap(s[1], s[2]);
    swap(s[4], s[5]);
    swap(s[1], s[5]);
    return s;
}
int res()
{
    queue<pair<string, int>> q;
    pair<string, int> k;
    q.push({s1, 0});
    while (q.size())
    {
        k = q.front();
        q.pop();
        if (k.first == s2)
            return k.second;
        q.push({trai(k.first), k.second + 1});
        q.push({phai(k.first), k.second + 1});
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        s1 = "";
        for (int i = 0; i < 6; i++)
        {
            char x;
            cin >> x;
            s1 += x;
        }
        s2 = "";
        for (int i = 0; i < 6; i++)
        {
            char x;
            cin >> x;
            s2 += x;
        }
        cout << res() << "\n";
    }
}