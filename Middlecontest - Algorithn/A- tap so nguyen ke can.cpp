#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    long long a[n + 1] = {};
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    while (q--)
    {
        long long x, k;
        cin >> x >> k;
        long long vt1 = lower_bound(a, a + n, x) - a;
        long long val1 = abs(a[vt1] - x);
        long long vt2 = vt1 - 1;
        long long val2 = abs(a[vt2] - x);
        while (k--)
        {
            if (val1 < val2)
            {
                if (vt1 < n)
                {
                    cout << a[vt1++] << " ";
                    val1 = abs(a[vt1] - x);
                }
                else
                {
                    cout << a[vt2--] << " ";
                    val2 = abs(a[vt2] - x);
                }
            }
            else
            {
                if (vt2 >= 0)
                {
                    cout << a[vt2--] << " ";
                    val2 = abs(a[vt2] - x);
                }
                else
                {
                    cout << a[vt1++] << " ";
                    val1 = abs(a[vt1] - x);
                }
            }
        }
        cout << "\n";
    }
}