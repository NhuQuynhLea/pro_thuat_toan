#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        long long dem = n / k;
        n /= k;
        if (dem % 2 != 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}