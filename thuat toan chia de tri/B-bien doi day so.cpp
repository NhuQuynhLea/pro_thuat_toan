#include <bits/stdc++.h>
using namespace std;
// string s, t;
// void Solve(int n, int k)
// {
//     int i = 1;
//     s = '1';
//     while (n - 1)

//     {
//         t = s;
//         i++;
//         s += i + '0';
//         s += t;
//         n--;
//         t = "";
//     }
//     cout << s[k - 1] << "\n";
// }
long long f[51];
long long Solve(long long n, long long k)
{
    if (k == f[n - 1] + 1)
        return n;
    if (k >= f[n - 1] + 1)
        return Solve(n - 1, k - f[n - 1] - 1);
    return Solve(n - 1, k);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        f[1] = 1;
        for (int i = 2; i <= 50; i++)
        {
            f[i] = f[i - 1] + 1 + f[i - 1];
        }
        long long x = Solve(n, k);
        cout << x << "\n";
    }
}