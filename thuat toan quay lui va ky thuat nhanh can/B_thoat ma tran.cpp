#include <bits/stdc++.h>
using namespace std;
long long b[100][100];
int a[100][100] = {};
int m, n;
long long Solve(int i, int j)
{
    if (i == 0 || j == 0)
        return 1;
    if (b[i][j] > 0)
        return b[i][j];
    b[i][j] = Solve(i - 1, j) + Solve(i, j - 1);
    return b[i][j];
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> m >> n;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
                cin >> a[i][j];
        }
        cout << Solve(m - 1, n - 1) << "\n";
    }
}