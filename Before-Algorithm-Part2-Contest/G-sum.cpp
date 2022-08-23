#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n + 1] = {};
    for (int i = 0; i < n; i++)
        cin >> a[i];
    long long sum = 0, ans = -1e9;
    int l, r, k = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        k++;
        if (sum > ans)
        {
            ans = sum;
            r = i + 1;
            l = i - k + 2;
        }
        if (sum < 0)
        {
            sum = 0;
            k = 0;
        }
    }
    cout << l << " " << r << " " << ans;
}