#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int dem = 0;
    if (k < 2 * n)
    {
        int x = k / 2;
        if (n - x < k)
        {
            dem = n - x;
        }
        else
            dem = x;
    }
    cout << dem;
}