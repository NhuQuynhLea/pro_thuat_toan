#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> m >> n;
        int p[m + 1] = {};
        int q[n + 1] = {};
        int r[m + n + 1] = {};
        for (int i = 0; i < m; i++)
            cin >> p[i];
        for (int i = 0; i < n; i++)
            cin >> q[i];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                r[i + j] += p[i] * q[j];
            }
        }
        for (int i = 0; i <= n + m - 2; i++)
            cout << r[i] << " ";
        cout << "\n";
    }
}