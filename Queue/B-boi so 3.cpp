#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 1] = {};
        int sum = 0, flag = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        sort(a, a + n);
        queue<int> du1;
        queue<int> du2;
        queue<int> du0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 3 == 1)
                du1.push(a[i]);
            else if (a[i] % 3 == 2)
                du2.push(a[i]);
            else
                du0.push(a[i]);
        }
        if (sum % 3 == 1)
        {
            if (du1.size())
                du1.pop();
            else if (du2.size())
            {
                du2.pop();
                du2.pop();
            }
            else
                flag = 0;
        }
        else if (sum % 3 == 2)
        {
            if (du2.size())
                du2.pop();
            else if (du1.size())
            {
                du1.pop();
                du1.pop();
            }
            else
                flag = 0;
        }
        priority_queue<int> q;
        while (du1.size())
        {
            q.push(du1.front());
            du1.pop();
        }
        while (du2.size())
        {
            q.push(du2.front());
            du2.pop();
        }
        while (du0.size())
        {
            q.push(du0.front());
            du0.pop();
        }
        if (flag == 0)
            cout << -1;
        else
        {
            if (q.empty())
                cout << -1;
            else
            {
                while (q.size())
                {
                    cout << q.top();
                    if (q.top() == 0)
                        break;
                    q.pop();
                }
            }
        }
        cout << "\n";
    }
}