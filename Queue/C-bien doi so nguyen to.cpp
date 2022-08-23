#include <bits/stdc++.h>
using namespace std;
const int M = 10005;
bool check[10001];
void SNT()
{
    for (int i = 2; i <= M; i++)
    {
        check[i] = true;
    }
    check[0] = false;
    check[1] = false;
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
    SNT();
    while (t--)
    {
        string s, t;
        cin >> s >> t;
        queue<pair<string, int>> k;
        int a[10005] = {};
        k.push({s, 0});
        a[stoi(s)] = 1;
        while (1)
        {
            pair<string, int> tmp = k.front();
            k.pop();
            if (tmp.first == t)
            {
                cout << tmp.second << "\n";
                break;
            }
            for (int i = 0; i <= 3; i++)
            {
                for (char j = '0'; j <= '9'; j++)
                {
                    if (i == 0 && j == '0')
                        continue;
                    string x = tmp.first;
                    x[i] = j;
                    int y = stoi(x);
                    if (check[y] == false || a[y] == 1)
                        continue;
                    k.push({x, tmp.second + 1});
                    a[y] = 1;
                }
            }
        }
    }
}