#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n + 5] = {};
        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > 0)
                sum += a[i];
        }
        printf("%d\n", sum + sum);
    }
}