#include <bits/stdc++.h>
using namespace std;
int ok;

vector<int> check;
vector<int> X;
int n;

void Try()
{
    cout << n;
    cout << 2;
    for (int i = 0; i < n; i++)
    {
        if (!check[i])
        {
            X.push_back(i);
            cout << X[i];
            check[i] = 1;
            if (X.size() == n)
            {
                for (int i = 0; i < n; i++)
                {
                    int z = X[i];
                    // cout << s[z];
                }
            }

            // else
            // {
            //     Try();
            // }
            // check[i] = 0;
        }
    }
}
int main()
{
    string s;
    cin >> s;
    n = s.size();
    cout << n;
    Try();
    cout << 1;
    cout << "\n";
}
