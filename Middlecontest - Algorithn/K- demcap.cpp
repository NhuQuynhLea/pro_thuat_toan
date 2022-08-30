#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n + 1] = {};
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += lower_bound(a + i, a + n, k + a[i]) - a;
        sum = sum - 1 - i;
    }
    cout << sum;
}