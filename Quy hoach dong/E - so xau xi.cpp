#include <bits/stdc++.h>
using namespace std;

int n;
map<long long, int> check;
vector<long long> v;
priority_queue<long long, vector<long long>, greater<long long>> q;
void Solve()
{
    q.push(1);
    for (int i = 1; i <= 10000; i++)
    {
        long long tmp = q.top();
        v.push_back(tmp);
       // if (tmp >= LLONG_MAX)
            //return;
        q.pop();
        long long tmp1 = tmp * 2;
        long long tmp2 = tmp * 3;
        long long tmp3 = tmp * 5;
        if (!check[tmp1])
        {
            q.push(tmp1);
            check[tmp1] = 1;
        }
        if (!check[tmp2])
        {
            q.push(tmp2);
            check[tmp2] = 1;
        }
        if (!check[tmp3])
        {
            q.push(tmp3);
            check[tmp3] = 1;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    Solve();
    while (t--)
    {
        int n;
        cin >> n;
        cout << v[n - 1] << "\n";
    }
}