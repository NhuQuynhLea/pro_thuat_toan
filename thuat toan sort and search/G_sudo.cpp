#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long k;
        cin >> k;
        int a[n + 1] = {};
        for (int i = 0; i < n; i++)
            cin >> a[i];
        long long sum = 0;
        int r = 0, l = 0, dem = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
            dem++;
            if (a[i] == k)
            {
                r = i;
                l = r - dem + 1;
                break;
            }
        }
    }
}