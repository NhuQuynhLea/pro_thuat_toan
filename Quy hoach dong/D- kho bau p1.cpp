#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n + 1] = {};
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int dp[n + 1] = {};
    int dem[n + 1] = {};
    for (int i = 1; i <= n; i++)
    {
        dp[i] = -1e5;
        for (int j = max(0, i - k); j < i; j++)
        {
            if (dp[j] + a[i] > dp[i])
            {
                dem[i] = dem[j] + 1;

                dp[i] = dp[j] + a[i];
            }
        }
        // cout << dem[i] << " ";
        // cout << dp[i] << " ";
    }
    int idx = 0;
    for (int i = 1; i <= n; i++)
    {
        if (dp[i] > dp[idx])
            idx = i;
    }
    cout << "\n";
    cout << dp[idx] << " " << dem[idx];
}


// -2 -2 -2 -2 100