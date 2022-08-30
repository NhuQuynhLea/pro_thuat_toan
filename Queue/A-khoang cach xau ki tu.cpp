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
        int k;
        cin >> k;
        string s;
        cin >> s;
        int a[105] = {};
        for (int i = 0; i < s.size(); i++)
            a[s[i]]++;
        priority_queue<int> q;
        for (int i = 65; i <= 90; i++)
        {
            if (a[i])
                q.push(a[i]);
        }
        while (k > 0 && q.size())
        {
            int tmp = q.top();
            q.pop();
            tmp--;
            if (tmp)
            {
                q.push(tmp);
            }
            k--;
        }
        long long ans = 0;
        while (q.size())
        {
            int tmp = q.top();
            ans += (long long)tmp * tmp;
            q.pop();
        }
        cout << ans << "\n";
    }
}