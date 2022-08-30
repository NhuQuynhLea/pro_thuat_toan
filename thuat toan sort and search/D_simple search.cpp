#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int k;
        cin >> k;
        int a[n + 1] = {};
        for (int i = 0; i < n; i++)
            cin >> a[i];
        long long sum = 0;
        sort(a, a + n);
        for (int i = 0; i < n; i++)
        {
            sum += upper_bound(a + i + 1, a + n, k - a[i]) - lower_bound(a + i + 1, a + n, k - a[i]);
        }
        cout << sum;
        cout << "\n";
    }
}