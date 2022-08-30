#include <bits/stdc++.h>
using namespace std;
long long F[100006];
const long long M = 60;
long long Solve(long long n, long long k)
{
    if (k == F[n - 1] + 1)
        return n;
    if (k > F[n - 1] + 1)
        return Solve(n - 1, k - F[n - 1] - 1);
    return Solve(n - 1, k);
}
int main()
{
    int n;
    cin >> n;
    long long a[n + 1] = {};
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    F[1] = 1;
    for (int i = 2; i < M; i++)
    {
        F[i] = F[i - 1] + 1 + F[i - 1];
    }
    for (int i = 1; i <= n; i++)
    {

        long long x = Solve(M, a[i]);
        cout << x << " ";
    }
}