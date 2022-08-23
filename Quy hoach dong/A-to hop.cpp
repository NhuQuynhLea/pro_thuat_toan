#include <bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;
long long dp[1005][1005];
void Solve()
{
    for (int i = 0; i <= 1000; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (i == j || j == 0)
                dp[i][j] = 1;
            else
                dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
            dp[i][j] %= mod;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    Solve();
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        cout << dp[n][k] << "\n";
    }
}