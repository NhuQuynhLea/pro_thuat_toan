#include <bits/stdc++.h>
using namespace std;

int bs(long long a[], long long l, long long r, long long x)
{

    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (x == a[mid])
            return mid;
        if (x < a[mid])
            r = mid - 1;
        if (x > a[mid])
            l = mid + 1;
    }
    return -1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        long long a[n1] = {};
        long long b[n2] = {};
        long long c[n3] = {};
        for (int i = 0; i < n1; i++)
            cin >> a[i];
        for (int i = 0; i < n2; i++)
            cin >> b[i];
        for (int i = 0; i < n3; i++)
            cin >> c[i];
        int x, y;
        int flag = 0;
        for (int i = 0; i < n1; i++)
        {
            x = bs(b, 0, n2 - 1, a[i]);
            y = bs(c, 0, n3 - 1, a[i]);
            if (x >= 0 && y >= 0)
            {
                cout << a[i] << " ";
                flag = 1;
            }
        }
        if (flag == 0)
            cout << "-1";
        cout << "\n";
    }
}