#include <bits/stdc++.h>
using namespace std;
vector<string> v(11);
int n;
int X[100], used[100], ans = 1e9;
int cmp(string x, string y)
{
    int cnt = 0;
    for (int i = 0; i < x.size(); i++)
    {
        for (int j = 0; j < y.size(); j++)
        {
            if (x[i] == y[j])
            {
                cnt++;
            }
        }
    }
    return cnt;
}
void Hoanvi(int i)
{
    for (int j = 0; j < n; j++)
    {
        if (used[j] == 0)
        {
            X[i] = j;
            used[j] = 1;
            if (i == n - 1)
            {
                int res = 0;
                for (int k = 0; k < n - 1; k++)
                    res += cmp(v[X[k]], v[X[k + 1]]);
                if (res < ans)
                    ans = res;
            }
            else
            {
                Hoanvi(i + 1);
            }
            used[j] = 0;
        }
    }
}
int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    Hoanvi(0);
    cout << ans;
}