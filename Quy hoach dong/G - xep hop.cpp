#include <bits/stdc++.h>
using namespace std;

struct Array
{
    int w, d, h;
};
bool cmp(Array x, Array y)
{
    if (x.w == y.w)
        return x.d > y.d;
    return x.w > y.w;
}
int main()
{
    int n;
    cin >> n;
    Array a[1005];
    for (int i = 1; i <= n; i++)
        cin >> a[i].w >> a[i].d >> a[i].h;
    sort(a + 1, a + n + 1, cmp);
    int L[1005] = {};
    for (int i = 1; i <= n; i++)
    {
        L[i] = a[i].h;
        for (int j = 1; j < i; j++)
        {
            if (a[i].w < a[j].w && a[i].d < a[j].d)
            {
                L[i] = max(L[i], L[j] + a[i].h);
            }
        }
    }
    cout << *max_element(L + 1, L + n + 1) << "\n";
}