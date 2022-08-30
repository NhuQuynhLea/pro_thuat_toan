#include <bits/stdc++.h>
using namespace std;
const int M = 1e9 + 1;

int main()
{
    int n;
    cin >> n;
    vector<long long> v;
    long long a[n + 1] = {};
    long long max = 0;
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
        v.push_back(a[i]);
    }
    sort(v.begin(), v.end());
    long long dem = 1;
    map<long long, long long> k;
    v.push_back(M);
    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i] == v[i + 1])
            dem++;

        else
        {
            k[v[i]] = dem;
            if (dem > max)
                max = dem;
            dem = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (k[a[i]] == max)
        {
            cout << a[i];
            break;
        }
    }
}