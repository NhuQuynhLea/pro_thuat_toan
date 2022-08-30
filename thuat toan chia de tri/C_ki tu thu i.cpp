#include <bits/stdc++.h>
using namespace std;

long long f[93];
long long n, i;
// void Solve()
// {
//     while (n > 2)
//     {
//         if (i <= f[n - 2])
//         {
//             n -= 2;
//         }
//         else

//         {
//             i -= f[n - 2];
//             n -= 1;
//         }
//     }
//     if (n == 1)
//         cout << 'A';
//     else
//         cout << 'B';
// }
char Solve(long long n, long long i)
{
    if (n == 1)
        return 'A';
    if (n == 2)
        return 'B';
    if (i <= f[n - 2])
        return Solve(n - 2, i);
    return Solve(n - 1, i - f[n - 2]);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> i;
        f[1] = f[2] = 1;
        for (int k = 3; k < 93; k++)
        {
            f[k] = f[k - 2] + f[k - 1];
        }
        cout << Solve(n, i);
        cout << "\n";
    }
}
