#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    long long a[n + 1] = {};
    for (int i = 0; i < n; i++)
        cin >> a[i];
    long long L[n + 1] = {};
    for (int i = 0; i < n; i++)
    {
        L[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if (a[i] > a[j])
                L[i] = max(L[i], L[j] + 1);
        }
    }
    vector<long long> v;
    long long x = *max_element(L, L + n);
    for (int i = n - 1; i >= 0; i--)
    {
        if (x == 0)
            break;
        if (L[i] == x)
        {
            v.push_back(a[i]);
            x--;
        }
    }
    sort(v.begin(), v.end());
    cout << *max_element(L, L + n) << "\n";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
}