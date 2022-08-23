#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n + 1] = {};
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    int x = 1, flag = 0;
    for (int i = 1; i <= n; i++)
    {
        if (x == k)
        {
            cout << a[i];
            flag = 1;
            break;
        }
        else
        {
            x++;
            if (a[i] == a[i + 1])
                x--;
        }
    }
    if (flag == 0)
        cout << "-1";
}