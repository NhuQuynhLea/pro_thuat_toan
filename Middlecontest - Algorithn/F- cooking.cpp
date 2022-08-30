#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        long long n;
        cin >> n;
        long long a, b;
        cin >> a >> b;
        if (2 * a <= b)
            cout << n * a;
        else
        {
            if (n % 2 == 0)
                cout << (n / 2) * b;
            else
                cout << (n / 2) * b + a;
        }
        cout << "\n";
    }
}