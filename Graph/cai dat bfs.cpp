#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> adj[1001];
bool visited[1001];

void init()
{
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    memset(visited, false, sizeof(visited));
}
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
        for (int i = 0; i < adj[v].size(); i++)
        {
            if (!visited[adj[v][i]])
            {
                q.push(adj[v][i]);
                visited[adj[v][i]] = true;
            }
        }
    }
}
int main()
{
    init();
    bfs(1);
}