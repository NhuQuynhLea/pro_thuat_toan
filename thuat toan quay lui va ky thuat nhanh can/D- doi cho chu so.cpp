#include <bits/stdc++.h>
using namespace std;
long long k, dem;
string s, maxn;
void Try(long long i)
{
    // for (long long i = pos; i < s.size() - 1; i++)
    // {
    for (long long j = i + 1; j < s.size(); j++)
    {
        if (s[j] > s[i])
        {
            swap(s[i], s[j]);
            dem++;
            maxn = max(maxn, s);
            if (dem < k)
                Try(i + 1);
            swap(s[i], s[j]);
            dem -= 1;
        }
        else
        {
            if (dem < k)
                Try(i + 1);
            swap(s[i], s[j]);
            dem -= 1;
        }
        //  }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> k >> s;
        dem = 0;
        maxn = s;
        Try(0);
        cout << maxn << "\n";
    }
}