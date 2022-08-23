#include <bits/stdc++.h>
using namespace std;
long long Tinh(string a, string b)
{
    int cnt = 0;
    while (a != b && cnt <= a.size())
    {
        cnt++;
        char tmp = a[0];
        a.erase(a.begin() + 0);
        a += tmp;
    }
    if (a == b)
    {
        return cnt;
    }
    else
        return -1;
}
int main()
{
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    long long dem = 0, ans = 1e18;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j != i)
            {
                if (Tinh(v[j], v[i]) == -1)
                {
                    cout << -1;
                    return 0;
                }
                else
                    dem += Tinh(v[j], v[i]);
            }
        }
        ans = min(ans, dem);
        dem = 0;
    }
    cout << ans;
}