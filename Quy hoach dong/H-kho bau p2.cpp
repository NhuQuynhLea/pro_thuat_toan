#include <bits/stdc++.h>
using namespace std;

int a[1005][1005];
long long F[1005][1005];
long long G[1005][1005];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
                a[i][j] = 0;
            else
                cin >> a[i][j];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1)
                F[i][j] = F[i][j - 1] + a[i][j];
            else if (j == 1)
                F[i][j] = F[i - 1][j] + a[i][j];
            else
                F[i][j] = F[i][j - 1] + F[i - 1][j] - F[i - 1][j - 1] + a[i][j];
        }
    }
    long long res = 0;
    for (int i = 1; i <= n - k + 1; i++)
    {
        for (int j = 1; j <= n - k + 1; j++)
        {
            G[i + k - 1][j + k - 1] = F[i + k - 1][j + k - 1] - F[i - 1][j + k - 1] - F[i + k - 1][j - 1] + F[i - 1][j - 1];
            res = max(G[i + k - 1][j + k - 1], res);
        }
    }
    cout << res;
}