#include <bits/stdc++.h>
using namespace std;

const long long mod = 1e9 + 7;
long long luythua(long long n, long long k)
{
    if (k == 0)
        return 1;
    if (k % 2 == 0)
        return (luythua(n, k / 2) % mod * luythua(n, k / 2) % mod) % mod;
    return (n * luythua(n, k / 2) % mod * luythua(n, k / 2) % mod) % mod;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        cout << luythua(n, k) << "\n";
    }
}