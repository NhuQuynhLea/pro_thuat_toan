#include <bits/stdc++.h>
using namespace std;

int ok, a[100], n;
void ktao()
{
    for (int i = 0; i < n; i++)
        a[i] = 0;
}
void gen()
{
    int i = n - 1;
    while (i >= 0 && a[i] == 1)
    {
        a[i] = 0;
        i--;
    }
    if (i < 0)
    {
        ok = 0;
    }
    else
        a[i] = 1;
}
void xuat()
{
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] == 0 && a[i - 1] == 1)
        {
            cout << 1;
            i--;
        }
        else if (a[i] == 1 && a[i - 1] == 1)
        {
            cout << 0;
            i--;
        }
        cout << a[i];
    }
    cout << " ";
}
bool check()
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
            return 1;
    }
    return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ok = 1;
        ktao();
        for (int i = 0; i < n; i++)
            cout << a[i];
        cout << " ";
        while (ok)
        {
            // if(check())
            // {
            xuat();
            //}
            gen();
        }
        cout << "\n";
    }
}