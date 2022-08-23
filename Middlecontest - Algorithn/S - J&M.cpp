#include <bits/stdc++.h>
using namespace std;

int check(int a[], int b[], int x, int y, int k, int h)
{
    int sum1 = 0, sum2 = 0;
    for (int i = x; i <= y; i++)
        sum1 += a[i];
    for (int j = k; j <= h; j++)
        sum2 += b[j];
    if (sum1 == sum2)
        return 1;
    return 0;
}
int main()
{
    int n;
    cin >> n;
    int a[n + 1] = {};
    int b[n + 1] = {};
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        cin >> b[i];
    if (check(a, b, 1, n, 1, n) == 0)
        cout << "NO";
    else
    {
        if (n % 2 == 0)
        {
            if (check(a, b, 1, n / 2, 1, n / 2) == 1 && check(a, b, n / 2 + 1, n, n / 2 + 1, n) == 1 || check(a, b, 1, n / 2, n / 2 + 1, n) == 1 && check(a, b, n / 2 + 1, n, 1, n / 2) == 1)
                cout << "YES";
            else
                cout << "NO";
        }
        else
        {
            if (check(a, b, 1, n / 2, 1, n / 2) == 1 && check(a, b, n / 2 + 2, n, n / 2 + 2, n) == 1 || check(a, b, 1, n / 2, n / 2 + 2, n) == 1 && check(a, b, n / 2 + 2, n, 1, n / 2) == 1)
                cout << "YES";
            else
                cout << "NO";
        }
    }
}