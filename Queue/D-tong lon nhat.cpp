#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n + 1] = {};
        for (int i = 0; i < n; i++)
            cin >> a[i];
        priority_queue<pair<long long, int>> b;
        b.push({a[0], 0});
        for (int i = 1; i <= n - 2; i++)
        {
            pair<long long, int> tmp = b.top();
            while (tmp.second + k < i)
            {
                b.pop();
                tmp = b.top();
            }
            b.push({tmp.first + a[i], i});
        }
        pair<long long, int> p = b.top();
        cout << p.first + a[n - 1] << "\n";
    }
}