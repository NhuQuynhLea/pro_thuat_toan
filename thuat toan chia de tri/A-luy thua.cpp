#include <bits/stdc++.h>
using namespace std;

const long long mod = 1e9 + 7;
long long luythua(int n, int k)
{
    if (k == 0)
        return 1;
    long long x = luythua(n, k / 2);
    if (k % 2 == 1)
        return n * (x % mod * x % mod) % mod;
    return (x % mod) * (x % mod) % mod;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        cout << luythua(n, k) << "\n";
    }
}