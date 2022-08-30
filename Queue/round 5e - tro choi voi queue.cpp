#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    // queue<pair<int, int>> q;
    // for (int i = 1; i <= 5; i++)
    //     q.push({i, 1});
    // while (1)
    // {
    //     if (n > q.front().second)
    //     {
    //         n -= q.front().second;
    //         q.push({q.front().first, q.front().second * 2});
    //         q.pop();
    //     }
    //     else
    //     {
    //         cout << q.front().first;
    //         break;
    //     }
    // }
    queue<int> q;
    for (int i = 1; i <= 5; i++)
        q.push(i);
    int i = 1;
    while (n > 5 * i)
    {
        n -= 5 * i;
        i *= 2;
    }
    for (int j = i; j < n; j += i)
        q.pop();
    cout << q.front();
}