#include <bits/stdc++.h>
using namespace std;
int a[11];
vector<long long> ans(100);
vector<long long> kq;
int k;
void Try(int i)
{
    for (int j = 1; j <= i; j++)
    {
        ans[k] = ans[k] * 10 + a[j];
    }
    k++;
    if (a[i] == 9)
        return;
    for (int j = 1; j <= i; j++)
        a[j] += 1;
    Try(i);
}
int length(long long x)
{
    int cnt = 0;
    while (x)
    {
        cnt++;
        x /= 10;
    }
    return cnt;
}
int main()
{
    long long low, high;
    cin >> low >> high;
    int dem = 0;
    for (int i = length(low); i <= length(high); i++)
    {
        fill(ans.begin(), ans.end(), 0);
        for (int j = 1; j <= i; j++)
            a[j] = j;
        Try(i);
        for (int j = 0; j < ans.size(); j++)
        {
            if (ans[j] >= low && ans[j] <= high)
            {
                dem++;
                kq.push_back(ans[j]);
            }
        }
    }
    cout << dem << "\n";
    cout << "[";
    for (int i = 0; i < dem; i++)
    {
        cout << "[" << kq[i] << "]";
        if (i < dem - 1)
            cout << ", ";
    }
    cout << "]";
}