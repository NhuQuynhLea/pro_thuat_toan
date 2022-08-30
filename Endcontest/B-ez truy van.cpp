#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    long long a[n + 1] = {};
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    while (k--)
    {
        long long l, r;
        cin >> l >> r;
        if (l > a[n - 1])
        {
            cout << 0 << "\n";
        }
        else
        {
            long long x = lower_bound(a, a + n, l) - a;
            long long y = upper_bound(a, a + n, r) - a;
            cout << y - x << "\n";
        }
    }
}