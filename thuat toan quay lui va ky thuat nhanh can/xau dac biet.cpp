#include <bits/stdc++.h>
using namespace std;
int b[105];
int n = 0;
string s;
long long ans = 0;
long long Tinh()
{
    long long res = 1;
    int na = 0, pa = 0, check = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (b[i] == 1)
            na++, pa = 0;
        else if (b[i] == -1)
            na = 0, pa++;
        else
            na = 0, pa++, check = 1;
        if (na >= 3 || pa >= 3)
            return 0;
    }
    if (check == 0) // ko xuat hien chu L
        return 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'x')
        {
            if (b[i] == 1)
                res *= 5; // co 5 cach lay snguyen am
            else if (b[i] == -1)
                res *= 20; // co 20 cach lay phu am
        }
    }
    return res;
}
void Solve(int i) // i chay tu 0 -> s.size()-1
{

    if (s[i] == '_')
    {
        s[i] = 'x'; // danh dau x de luc sau tinh
        for (int j = -1; j <= 1; j++)
        {
            b[i] = j;              // thu gan bang j
            if (i == s.size() - 1) // dieu kien de quy, i = s.size()-1 thi co 1 xau hoan chinh
                ans += Tinh();
            else
                Solve(i + 1);
        }
        s[i] = '_'; // phai gan lai vi de thu cho cac truong hop khac
    }
    else // neu kp khoang trong thi tiep tuc
    {
        if (i == s.size() - 1)
            ans += Tinh();
        else
            Solve(i + 1);
    }
}

int main()
{
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '_')
            n++;
        if (s[i] == 'A' || s[i] == 'E' || s[i] == 'U' || s[i] == 'O' || s[i] == 'I')
            b[i] = 1;
        else if (s[i] == 'L')
            b[i] = 0;
        else
            b[i] = -1;
    }
    if (n != 0)
        Solve(0);
    cout << ans;
}