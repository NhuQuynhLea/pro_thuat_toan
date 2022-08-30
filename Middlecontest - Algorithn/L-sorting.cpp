#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n + 1] = {};
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int L, R;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            L = i;
            break;
        }
    }
    for (int i = n - 1; i > 0; i--)
    {
        if (a[i] < a[i - 1])
        {
            R = i;
            break;
        }
    }
    int min = *min_element(a + L, a + R + 1);
    int max = *max_element(a + L, a + R + 1);
    for (int i = 0; i < L; i++)
    {
        if (a[i] > min)
        {
            L = i;
            break;
        }
    }
    for (int i = n - 1; i > R; i--)
    {
        if (a[i] < max)
        {
            R = i;
            break;
        }
    }
    cout << L + 1 << " " << R + 1;
}