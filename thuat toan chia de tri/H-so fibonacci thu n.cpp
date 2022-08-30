#include <bits/stdc++.h>
using namespace std;

long long n;
long long F[2][2], M[2][2];
long long const mod = 1e9 + 7;
void mul(long long a[2][2], long long b[2][2])
{
    long long c[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < 2; k++)
            {
                c[i][j] = c[i][j] % mod + (a[i][k] * b[k][j]) % mod;
            }
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
            F[i][j] = c[i][j];
    }
    // long long x = (a[0][0] * b[0][0] % mod + a[0][1] * b[1][0] % mod) % mod;
    // long long y = (a[0][0] * b[0][1] % mod + a[0][1] * b[1][1] % mod) % mod;
    // long long z = (a[1][0] * b[0][0] % mod + a[1][1] * b[1][0] % mod) % mod;
    // long long t = (a[1][0] * b[0][1] % mod + a[1][1] * b[1][1] % mod) % mod;
    // a[0][0] = x;
    // a[0][1] = y;
    // a[1][0] = z;
    // a[1][1] = t;
}
void luythua(long long F[2][2], long long n)
{
    if (n == 1)
        return;
    luythua(F, n / 2);
    mul(F, F);
    if (n % 2)
        mul(F, M);
}
void Solve()
{
    F[0][0] = F[0][1] = F[1][0] = 1;
    F[1][1] = 0;
    M[0][0] = M[0][1] = M[1][0] = 1;
    M[1][1] = 0;
    cin >> n;
    if (n == 0)
        cout << 0;
    else
    {
        luythua(F, n);
        cout << F[0][1];
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Solve();
        cout << "\n";
    }
}
// Số fibonacii thứ n
// #include <bits/stdc++.h>
// using namespace std;

// const int mod = 1e9 + 7;

// struct matrix
// {
//     long long m[2][2];
// };

// matrix operator*(matrix a, matrix b)
// {
//     matrix ans;
//     ans.m[0][0] = (a.m[0][0] * b.m[0][0] % mod + a.m[0][1] * b.m[1][0] % mod) % mod;
//     ans.m[0][1] = (a.m[0][0] * b.m[0][1] % mod + a.m[0][1] * b.m[1][1] % mod) % mod;
//     ans.m[1][0] = (a.m[1][0] * b.m[0][0] % mod + a.m[1][1] * b.m[1][0] % mod) % mod;
//     ans.m[1][1] = (a.m[1][0] * b.m[0][1] % mod + a.m[1][1] * b.m[1][1] % mod) % mod;
//     return ans;
// }

// matrix operator^(matrix a, int k)
// {
//     if (k == 1)
//         return a;
//     matrix b = a ^ (k / 2);
//     b = b * b;
//     if (k & 1)
//         return b * a;
//     return b;
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         matrix x;
//         x.m[0][0] = x.m[0][1] = x.m[1][0] = 1;
//         x.m[1][1] = 0;
//         x = x ^ n;
//         cout << x.m[0][1] << "\n";
//     }
// }