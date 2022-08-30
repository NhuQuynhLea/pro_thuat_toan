#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int a[n + 1] = {};
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    stack<int> q;
    int max[n + 1] = {};
    for (int i = n; i >= 0; i--)
    {
        while (q.size() && a[i] >= a[q.top()])
            q.pop();
        if (q.empty())
            max[i] = -1;
        else
            max[i] = q.top();
        q.push(i);
    }
    int min[n + 1] = {};
    stack<int> p;
    for (int i = n; i >= 0; i--)
    {
        while (p.size() && a[i] <= a[p.top()])
            p.pop();
        if (p.empty())
            min[i] = -1;
        else
            min[i] = p.top();
        p.push(i);
    }
    for (int i = 1; i <= n; i++)
    {
        if (max[i] == -1 || min[max[i]] == -1)
            cout << -1 << " ";
        else
            cout << a[min[max[i]]] << " ";
    }
}