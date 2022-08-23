#include <bits/stdc++.h>
using namespace std;
int n, s, ok = 0;
int a[31], X[31];
void sinh(int i)
{
    int k = i;
    while (k > 0 && X[k] == n - i + k)
        k--;
    if (k <= 0)
        ok = 1;
    else
    {
        X[k]++;
        for (int j = k + 1; j <= i; j++)
            X[j] = X[j - 1] + 1;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> s;
        int flag = 0;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = 1; i <= n; i++)
        {
            ok = 0;                      // dk sinh to hop
            for (int j = 1; j <= i; j++) // khoi tao
                X[j] = j;
            while (!ok)
            {
                int res = 0;
                for (int x = 1; x <= i; x++)
                    res += a[X[x]];
                if (res == s)
                {
                    cout << i ;
                    flag = 1;
                    break;
                }
                sinh(i);
            }
            if (flag == 1)
                break;
        }
        if (flag == 0)
            cout << "-1";
        cout << "\n";
    }
}