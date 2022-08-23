#include <bits/stdc++.h>
using namespace std;

int check;
string s;
void gen(int n)
{
    int i = n - 1;
    while (i >= 0 && s[i] == '1')
    {
        s[i] = '0';
        i--;
    }
    if (i < 0)
        check = 0;
    else
    {
        s[i] = '1';
    }
}
void xuat(int n)
{
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            cout << 'A';
        else
            cout << 'B';
    }
    cout << " ";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        check = 1;
        int n;
        cin >> n;
        s = "";
        for (int i = 0; i < n; i++)
            s += '0';
        while (check)
        {
            xuat(n);
            gen(n);
        }
        cout << '\n';
    }
}