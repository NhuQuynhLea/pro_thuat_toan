#include <bits/stdc++.h>
using namespace std;

void gen(int a[], int n, int k)
{
    int i = k;
    while (i > 0 && a[i] == n - k + i)
        i--;
    if (i != 0)
    {
        a[i]++;
        for (int j = i + 1; j <= n; j++)
        {
            a[j] = a[j - 1] + 1;
        }
    }
    else
    {
        for (int i = 1; i <= k; i++)
            a[i] = i;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n + 1] = {};
        for (int i = 1; i <= k; i++)
            cin >> a[i];
        gen(a, n, k);
        for (int i = 1; i <= k; i++)
            cout << a[i] << " ";
        cout << "\n";
    }
}