#include <bits/stdc++.h>
using namespace std;

int n;
bool check[1000005];
const int M = 1000000;
void era()
{
    for (int i = 2; i <= M; i++)
    {
        check[i] = true;
    }
    check[0] = check[1] = false;
    for (int i = 2; i * i <= M; i++)
    {
        if (check[i] == true)
        {
            for (int j = i * i; j <= M; j += i)
            {
                check[j] = false;
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    era();
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 2; i < n; i++)
        {
            if (check[i] == true)
            {
                cout << i;
                cout << " ";
            }
        }
        cout << "\n";
    }
}