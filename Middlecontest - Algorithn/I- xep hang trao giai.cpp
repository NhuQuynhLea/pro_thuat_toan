#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n + 1] = {};
    int b[n + 1] = {};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b + n);
    map<int, int> v;
    for (int i = 0; i < n; i++)
        v.insert(pair<int, int>(b[i], i));
    for (int i = 0; i < n; i++)
        cout << v[a[i]] << " ";
}