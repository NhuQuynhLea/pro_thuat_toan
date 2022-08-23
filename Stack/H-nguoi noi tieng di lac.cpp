#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n + 1][n + 1] = {};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    }
    stack<int> q;
    for (int i = 0; i < n - 1; i++)
    {
        if (q.empty())
            q.push(i);
        int res = q.top();
        if (a[i + 1][res] == 0)
        {
            q.pop();
            if (a[res][i + 1] == 1)
                q.push(i + 1);
        }
        else if (a[res][i + 1] == 1)
            q.pop();
    }
    for (int i = 0; i < n; i++)
    {
        if (q.size())
        {
            int res = q.top();
            if (i != res && (a[i][res] == 0 || a[res][i] == 1))
                q.pop();
        }
    }
    if (q.empty())
        cout << "No celebrity detected";
    else
        cout << q.top() << " is celebrity";
}