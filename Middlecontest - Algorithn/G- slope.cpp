#include <bits/stdc++.h>
using namespace std;
int n;
int a[200001];
void check(int i)
{
    int dem1 = 1, dem2 = 1;
    for (int j = i; j < n; j++)
    {
        if (a[j] < a[j + 1])
            break;
        dem1++;
    }
    for (int j = i; j > 1; j--)
    {
        if (a[j] < a[j - 1])
            break;
        dem2++;
    }
    cout << dem1 + dem2 - 1 << " ";
    if (i < n)
        check(i + 1);
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    check(1);
}