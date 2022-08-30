#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int a[n + 1] = {};
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    stack<int> q;
    int L[n + 1] = {};
    int R[n + 1] = {};
    for (int i = 1; i <= n; i++)
    {
        while (q.size() && a[i] <= a[q.top()])
            q.pop();
        if (q.empty())
            L[i] = 1;
        else
            L[i] = q.top() + 1;
        q.push(i);
    }
    stack<int> p;
    for (int i = n; i >= 1; i--)
    {
        while (p.size() && a[i] <= a[p.top()])
            p.pop();
        if (p.empty())
            R[i] = n;
        else
            R[i] = p.top() - 1;
        p.push(i);
    }
    long long dt = 0, ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] <= R[i] - L[i] + 1)
            ans = a[i];
        else
            ans = R[i] - L[i] + 1;
        dt = max(dt, ans * ans);
    }

    cout << dt;
}