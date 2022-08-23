#include <bits/stdc++.h>
using namespace std;

int a[100], n, check;
void gen()
{
    int i = n - 1;
    while (i >= 1 && a[i] > a[i + 1])
        i--;
    if (i == 0)
        check = 0;
    else
    {
        int j = n;
        while (a[i] > a[j])
            j--;
        swap(a[i], a[j]);
        sort(a + i + 1, a + n + 1);
    }
}
void xuat()
{
    for (int i = 1; i <= n; i++)
    {
        cout << a[i];
    }
    cout << " ";
}
int main()
{
    cin >> n;
    check = 1;
    for (int i = 1; i <= n; i++)
        a[i] = i;
    while (check)
    {
        xuat();
        gen();
    }
}