#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int x;
    while (t--)
    {
        cin >> x;
        string s;
        cin >> s;
        cout << x << " ";
        if (next_permutation(s.begin(), s.end()))
        {
            cout << s;
        }
        else
            cout << "BIGGEST";
        cout << "\n";
    }
}