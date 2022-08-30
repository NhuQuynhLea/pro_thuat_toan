#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int n, k;
    // cin >> n >> k;
    // int a[n + 1] = {};
    // for (int i = 0; i < n; i++)
    //     cin >> a[i];
    // deque<int> q;
    // for (int i = 1; i <= n; i++)
    // {
    //     while (!q.empty() && a[i] >= a[q.back()])
    //         q.pop_back();
    //     while (!q.empty() && q.front() < i - k + 1)
    //         q.pop_front();
    //     q.push_back(i);
    //     if (i >= k)
    //         cout << a[q.front()] << " ";
    // }
    // stack<int> q;
    // for (int i = 0; i < n; i++)
    // {
    //     while (q.size() && a[i] <= a[q.top()])
    //         q.pop();
    //     q.push(i);
    //     stack<int> t;
    //     while (q.size())
    //     {
    //         t.push(q.top());
    //         q.pop();
    //     }
    //     while (t.top() + k <= i)
    //         t.pop();
    //     if (i - k + 1 >= 0)
    //         cout << a[t.top()] << " ";
    //     while (t.size())
    //     {
    //         q.push(t.top());
    //         t.pop();
    //     }
    //  }
    int n, k;
    cin >> n >> k;
    int a[n + 1] = {};
    for (int i = 0; i < n; i++)
        cin >> a[i];
    deque<int> q;
    for (int i = 0; i < n; i++)
    {
        while (q.size() && a[i] <= a[q.back()])
            q.pop_back();
        q.push_back(i);
        while (q.size() && q.front() < i - k + 1)
            q.pop_front();
        if (i >= k - 1)
            cout << a[q.front()] << " ";
    }
}