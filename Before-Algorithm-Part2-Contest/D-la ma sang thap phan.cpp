#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<int> v;
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == 'I' && s[i + 1] == 'V')
        {
            v.push_back(4);
            s[i] = 'x';
            s[i + 1] = 'x';
        }
        if (s[i] == 'I' && s[i + 1] == 'X')
        {
            v.push_back(9);
            s[i] = 'x';
            s[i + 1] = 'x';
        }
        if (s[i] == 'X' && s[i + 1] == 'L')
        {
            v.push_back(40);
            s[i] = 'x';
            s[i + 1] = 'x';
        }
        if (s[i] == 'X' && s[i + 1] == 'C')
        {
            v.push_back(90);
            s[i] = 'x';
            s[i + 1] = 'x';
        }
        if (s[i] == 'C' && s[i + 1] == 'D')
        {
            v.push_back(400);
            s[i] = 'x';
            s[i + 1] = 'x';
        }
        if (s[i] == 'C' && s[i + 1] == 'M')
        {
            v.push_back(900);
            s[i] = 'x';
            s[i + 1] = 'x';
        }
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'I')
            v.push_back(1);
        if (s[i] == 'V')
            v.push_back(5);
        if (s[i] == 'X')
            v.push_back(10);
        if (s[i] == 'L')
            v.push_back(50);
        if (s[i] == 'C')
            v.push_back(100);
        if (s[i] == 'D')
            v.push_back(500);
        if (s[i] == 'M')
            v.push_back(1000);
    }
    int sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];
    }
    cout << sum;
}