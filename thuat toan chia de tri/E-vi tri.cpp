#include <bits/stdc++.h>
using namespace std;
// int n;
// vector<int> v(n + 1);

// int Binarysearch(vector<int> v, int n, int k)
// {
//     int r = n - 1;
//     int l = 0;
//     while (r >= l)
//     {
//         int mid = (l + r) / 2;
//         if (v[mid] = k)
//             return mid;
//         if (v[mid] < k)
//             l = mid + 1;
//         if (v[mid] > k)
//             r = mid - 1;
//     }
//     return 0;
// }
// int main()
// {
//     int k;
//     cin >> n >> k;
//     for (int i = 0; i < n; i++)
//         cin >> v[i];
//     sort(v.begin(), v.end());
//     int ans = Binarysearch(v, n, k);
//     cout << ans + 1;
// }

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n + 1);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int x = lower_bound(v.begin(), v.end(), k) - v.begin();
        int y = upper_bound(v.begin(), v.end(), k) - v.begin();
        if (x == y)
            cout << "NO\n";
        else
            cout << x + 1 << "\n";
    }
}