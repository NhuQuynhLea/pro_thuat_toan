#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int n = s.size();
        s = " " + s;
        long long a[n + 5] = {};
        long long b[n + 5] = {};
        a[0] = b[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            if (s[i] == 'M')
            {
                a[i] = a[i - 1];
                b[i] = 1 + min(a[i - 1], b[i - 1]);
            }
            else
            {
                a[i] = 1 + min(a[i - 1], b[i - 1]);
                b[i] = b[i - 1];
            }
        }
        cout << a[n] << "\n";
    }
}

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         string s;
//         cin >> s;
//         int dem = 0;
//         for (int i = 1; i < s.size() - 1; i++)
//         {
//             if (s[i] == 'D' && s[i + 1] == 'M' && s[i - 1] == 'M')
//             {
//                 dem++;
//                 s[i] = 'M';
//             }
//             if (s[i] == 'M' && s[i + 1] == 'D' && s[i - 1] == 'D')
//             {
//                 dem++;
//                 s[i] = 'D';
//             }
//         }
//         for (int i = 0; i < s.size() - 1; i++)
//         {
//             if (s[i] == 'M' && s[i + 1] == 'D')
//             {
//                 dem++;
//                 for (int j = 0; j <= i; j++)
//                     s[j] = 'D';
//             }
//             else if (s[i] == 'D' && s[i + 1] == 'M')
//             {
//                 dem++;
//                 for (int k = 0; k <= i; k++)
//                     s[k] = 'M';
//             }
//         }
//         for (int i = 0; i < s.size(); i++)
//         {
//             if (s[i] == 'D')
//             {
//                 dem++;
//                 break;
//             }
//         }
//         cout << dem << "\n";
//     }
// }