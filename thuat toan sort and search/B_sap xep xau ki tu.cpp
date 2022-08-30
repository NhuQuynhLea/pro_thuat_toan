//*max_element(a + 1, a + n + 1)
#include <bits/stdc++.h>
using namespace std;

bool kt(string s)
{
    if (isalpha(s[0]))
        return 0;
    else
        return 1;
}
bool cmp(string a, string b)
{
    if (a.size() == b.size())
        return a < b;
    return a.size() < b.size();
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        vector<string> d, chu, so;
        while (1)
        {
            cin >> s;
            string h = s;
            h[h.size() - 1] = ',';
            d.push_back(h);
            if (kt(s) == 0)
                chu.push_back(h);
            else
                so.push_back(h);
            if (s[s.size() - 1] == '.')
                break;
        }
        sort(chu.begin(), chu.end());
        sort(so.begin(), so.end(), cmp);
        vector<string> ans;
        int k = 0, x = 0;
        for (int i = 0; i < d.size(); i++)
        {
            if (kt(d[i]) == 0)
                ans.push_back(chu[k++]);
            else
                ans.push_back(so[x++]);
        }
        int l = ans.size();
        ans[l - 1][ans[l - 1].size() - 1] = '.';
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
}
