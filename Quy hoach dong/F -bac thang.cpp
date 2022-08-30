#include <bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        long long dp[n + 5] = {};
        dp[0] = dp[1] = 1;
        for (int i = 2; i <= n; i++)
        {
            if (i <= k)
            {
                dp[i] = (2 * dp[i - 1]) % mod; // dp[i] = dp[i-1] + ..+ dp[i-k] + dp[i-k-1] - dp[i-k-1]
                                               // dp[i-1] = dp[i-2] + .. + dp[i-k-1] => dp[i] = 2* dp[i-1] - dp[i-k-1]
            }
            else
            {
                dp[i] = ((2 * dp[i - 1]) % mod - (dp[i - k - 1] % mod) + mod) % mod;
            }
        }
        cout << dp[n] << "\n";
    }
}
