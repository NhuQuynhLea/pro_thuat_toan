#include <bits/stdc++.h>
using namespace std;

long long n, k;
long long F[11][11], M[11][11];
long long const mod = 1e9 + 7;
void mul(long long a[11][11], long long b[11][11])
{
    long long c[11][11];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                c[i][j] += (a[i][k] * b[k][j]) % mod;
                c[i][j] %= mod;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            F[i][j] = c[i][j];
    }
}
void luythua(long long F[11][11], long long k)
{
    if (k <= 1)
        return;
    luythua(F, k / 2);
    mul(F, F);
    if (k % 2 == 1)
        mul(F, M);
}
void Solve()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> F[i][j];
            M[i][j] = F[i][j];
        }
    }
    luythua(F, k);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << F[i][j] << " ";
        }
        cout << "\n";
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        Solve();
    }
}
// Chua bai  Luỹ thừa ma trận
// #include <bits/stdc++.h>
// using namespace std;

// struct matrix
// {
//     long long m[10][10];
// };

// int n;
// long long mod = 1e9 + 7;

// matrix operator*(matrix a, matrix b)
// {
//     matrix c;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             c.m[i][j] = 0;
//             for (int k = 0; k < n; k++)
//                 c.m[i][j] = (c.m[i][j] + (a.m[i][k] * b.m[k][j]) % mod) % mod;
//         }
//     }
//     return c;
// };

// matrix operator^(matrix a, long long k)
// {
//     if (k == 1)
//         return a;
//     matrix b = a ^ (k / 2);
//     b = b * b;
//     if (k % 2 == 0)
//         return b;
//     else
//         return a * b;
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         long long k;
//         cin >> n >> k;

//         matrix a;
//         for (int i = 0; i < n; i++)
//             for (int j = 0; j < n; j++)
//                 cin >> a.m[i][j];
//         a = a ^ k;

//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < n; j++)
//                 cout << a.m[i][j] << " ";
//             cout << endl;
//         }
//     }
// }