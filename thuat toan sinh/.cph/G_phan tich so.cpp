#include <bits/stdc++.h>
using namespace std;
int a[3000];
bool kt = 1;
int cnt;
void sinh(int n)
{
    int i = cnt;
    while (a[i] == 1)
        i--;
    int k = cnt - i + 1;
    cnt = i;
    if (i == 0)
    {
        kt = 0;
        return;
    }
    a[i]--;
    while (k > a[i])
    {
        a[++cnt] = a[i];
        k -= a[i];
    }
    if (k != 0)
    {
        a[++cnt] = k;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        a[1] = n;
        cnt = 1;
        while (kt)
        {
            cout << "(";
            for (int i = 1; i <= cnt; i++)
            {
                cout << a[i];
                if (i < cnt)
                    cout << " ";
            }
            cout << ")";
            cout << " ";
            sinh(n);
        }
        cout << "\n";
    }
}