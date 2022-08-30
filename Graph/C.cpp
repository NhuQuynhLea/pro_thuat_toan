#include <bits/stdc++.h>
using namespace std;
vector<int> a[1005];
int main()
{
    int v, e;
    cin >> v >> e;
    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    for (int i = 1; i <= v; i++)
    {
        if (a[i].size())
        {
            cout << a[i].size();
            cout << "\n";
        }
        else
            cout << 0 << "\n";
    }
}