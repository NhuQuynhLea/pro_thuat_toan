#include <bits/stdc++.h>
using namespace std;
string s;
void gen()
{
    int i = s.size() - 1;
    while (i >= 0 && s[i] == '1')
    {
        s[i] = '0';
        i--;
    }
    if (i != -1)
        s[i] = '1';
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> s;
        gen();
        cout << s << "\n";
    }
}