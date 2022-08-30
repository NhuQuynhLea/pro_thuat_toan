#include <bits/stdc++.h>
using namespace std;
queue<string> q;
vector<long long> res;
void init()
{
    q.push("6");
    q.push("8");
    res.push_back(6);
    res.push_back(8);
    while (1)
    {

        string top = q.front();
        q.pop();
        if (top.length() == 18)
            break;
        res.push_back(stoll(top + "6"));
        res.push_back(stoll(top + "8"));
        q.push(top + "6");
        q.push(top + "8");
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    init();
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        long long dem = 0;
        for (int i = 0; i < res.size(); i++)
        {
            if (res[i] >= a && res[i] <= b)
                dem++;
        }
        cout << dem << "\n";
    }
}