#include <bits/stdc++.h>
using namespace std;
int n, max = 1e4;
int c[15][15], X[15], visited[15];
int currentcost = 0, minn = 1e9, cmin = 1e9;

void Try(int i)
{
    if (currentcost + cmin * (n - i + 1) >= minn)
        return;
    for (int j = 2; j <= n; j++)
    {
        if (!visited[j])
        {
            X[i] = j;
            visited[j] = 1;
            currentcost += c[X[i - 1]][j];
            if (i == n)
            {
                if (currentcost + c[X[n]][1] < minn)
                    minn = currentcost + c[X[n]][1];
            }
            else
                Try(i + 1);
            visited[j] = 0;
            currentcost -= c[X[i - 1]][j];
        }
    }
}
int main()
{
    cin >> n;
    if (n <= 1)
    {
        cout << 0;
        return 0;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> c[i][j];
            cmin = min(cmin, c[i][j]);
        }
    }
    X[1] = 1;
    visited[1] = 1;
    Try(2);
    cout << minn;
}