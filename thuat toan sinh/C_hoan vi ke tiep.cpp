#include <bits/stdc++.h>
using namespace std;
void gen(int a[], int n)
{
    // int i = n - 1;
    // while (i > 0 && a[i] > a[i + 1])
    //     i--;
    // if (i > 0)
    // {
    //     int j = n;
    //     while (a[j] < a[i])
    //         j--;
    //     swap(a[i], a[j]);
    //     sort(a + i + 1, a + n + 1);
    // }
    // else
    // {
    //     for (int i = 1; i <= n; i++)
    //         a[i] = i;
    // }
    if (!next_permutation(a + 1, a + n + 1))
    {
        for (int i = 1; i <= n; i++)
            a[i] = i;
    }
}
// next_permutation(a,a+n)
// prev_permutation(a,a+n)
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 1] = {};
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        gen(a, n);
        for (int i = 1; i <= n; i++)
            cout << a[i] << " ";
        cout << "\n";
    }
}
