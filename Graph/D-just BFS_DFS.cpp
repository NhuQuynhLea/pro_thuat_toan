# include<bits/stdc++.h>
using namespace std;
int a[1001][1001];
bool visited[1001][1001];
void dfs(int i,int j)
{
    visited[i][j] = true;
    
}
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n;j++)
            cin >> a[i][j];
    }

}