#include <bits/stdc++.h>
using namespace std;
long long Solve(string s)
{
    long long res = 0;
    int p = 0;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        int x = s[i] - '0';
        res += x * pow(2, p);
        p++;
    }
    return res;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        cout << Solve(s1) * Solve(s2) << "\n";
    }
}