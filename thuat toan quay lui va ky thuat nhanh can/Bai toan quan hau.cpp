#include <bits/stdc++.h>
using namespace std;
int n, X[100], cot[100], d1[100], d2[100];
int dem = 0;
void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (cot[j] == 0 && d1[i - j + n] == 0 && d2[i + j - 1] == 0)
        {
            X[i] = j;
            cot[j] = d1[i - j + n] = d2[i + j - 1] = 1;
            if (i == n)
                dem++;
            else
                Try(i + 1);
            cot[j] = d1[i - j + n] = d2[i + j - 1] = 0;
        }
    }
}
int main()
{
    cin >> n;
    Try(1);
    cout << dem;
}