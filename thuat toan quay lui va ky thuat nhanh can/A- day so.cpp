#include <bits/stdc++.h>
using namespace std;

int a[11], X[11];
void Solve(int n, int i)
{
    for (int j = 1; j <= n - 1; j++)
    {
        X[i] = a[j] + a[j + 1];
        i++;
    }
    cout << "[";
    for (int k = 1; k <= n - 1; k++)
    {
        cout << X[k];
        if (k < n - 1)
            cout << " ";
    }

    cout << "]\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        cout << "[";
        for (int k = 1; k <= n; k++)
        {
            cout << a[k];
            if (k < n)
                cout << " ";
        }

        cout << "]\n";
        while (n > 1)
        {
            Solve(n, 1);
            for (int i = 1; i < n; i++)
                a[i] = X[i];
            n--;
        }
    }
}