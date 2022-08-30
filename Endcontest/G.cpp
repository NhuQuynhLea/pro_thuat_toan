#include <bits/stdc++.h>
using namespace std;
long long a[1000005];
int n;
long long sum;
void Try(int i, int k)
{
    queue<long long> q;
    int dem = 1;
    for (int i = 1; i <= n; i++)
    {
        q.push(a[i]);
        if(q.size() == dem)
        {
            while(q.size())
            {
                sum += q.front();
                q.pop();
            }
        }
        
    }
}
int main()
{
    cin >> n;
    // long long a[n + 1] = {};
    // int b[n + 1] = {};
    // for (int i = 1; i <= n; i++)
    // {
    //     cin >> a[i];
    //     b[i] = i;
    // }
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
}