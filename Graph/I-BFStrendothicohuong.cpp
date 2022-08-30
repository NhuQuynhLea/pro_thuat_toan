#include <bits/stdc++.h>
using namespace std;
vector<int> adj[1001];
bool visited[1001];
void bfs(int u)
{
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while (q.size())
    {
        int v = q.front();
        q.pop();
        cout << v << " ";
        for (int x : adj[v])
        {
            if (!visited[x])
            {
                q.push(x);
                visited[x] = true;
            }
        }
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
        }
        for (int i = 1; i <= n; i++)
        {
            if (adj[i].size())
                sort(adj[i].begin(), adj[i].end());
        }
        bfs(st);
        cout << "\n";
    }
}