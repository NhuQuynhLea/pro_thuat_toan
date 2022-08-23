#include <bits/stdc++.h>
using namespace std;
vector<int> adj[1001];
bool visited[1001];
void dfs(int u)
{

    cout << u << " ";
    visited[u] = true;
    for (int v : adj[u])
    {
        if (!visited[v])
            dfs(v);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, st;
        cin >> n >> m >> st;
        for (int i = 0; i < 1001; i++)
            adj[i].clear();
        memset(visited, false, sizeof(visited));
        for (int i = 0; i < m; i++)
        {
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        for (int i = 1; i <= n; i++)
        {
            if (adj[i].size())
                sort(adj[i].begin(), adj[i].end());
        }
        dfs(st);
        cout << "\n";
    }
}