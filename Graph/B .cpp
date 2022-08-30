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
            sort(a[i].begin(), a[i].end());
    }
    for (int i = 1; i <= v; i++)
    {
        if(a[i].size())
        {
            cout << "Dinh ke cua " << i << " : ";
            for (int j = 0; j < a[i].size(); j++)
            {
                cout << a[i][j] << " ";
            }
            cout << "\n";
        }
    }
}