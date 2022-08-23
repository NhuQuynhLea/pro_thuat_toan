#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

struct cmp
{
    bool operator()(long long a, long long b) { return a > b; }
};
int main()
{
    long long n;
    cin >> n;
    long long c[n + 1] = {};
    priority_queue<long long, vector<long long>, cmp> q;
    for (long long i = 1; i <= n; i++)
    {
        cin >> c[i];
        q.push(c[i]);
    }

    long long ans = 0;
    while (q.size() > 1)
    {
        long long x = q.top();
        q.pop();
        long long y = q.top();
        q.pop();
        ans += (x + y) % MOD;
        q.push((x + y) % MOD);
    }
    cout << ans % MOD;
}