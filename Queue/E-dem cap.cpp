#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n + 1] = {};
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    long long res, sum = 0;
    for (int i = 0; i < n; i++)
    {
        res = lower_bound(a + i, a + n, k + a[i]) - a;
        res = res - i - 1;
        sum += res;
    }
    cout << sum;
}