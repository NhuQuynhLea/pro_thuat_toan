#include <bits/stdc++.h>
using namespace std;
string n;
bool check(string t)
{
    if (t.size() % 2 != 0)
        return false;
    else
    {
        for (int i = 0; i < t.size() / 2; i++)
        {
            // cout << t[i] << " " << t[i + t.size() / 2] << "x";
            if (t[i] == t[i + t.size() / 2])
                return false;
        }
    }

    return true;
}
void Solve()
{
    queue<string> q;
    q.push("4");
    q.push("7");
    while (q.size())
    {
        string tmp = q.front();
        q.pop();
        if (stoi(tmp) >= stoi(n))
        {

            if (check(tmp) == true)
            {
                cout << tmp;
                return;
            }
        }
        q.push(tmp + '4');
        q.push(tmp + '7');
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> n;
    Solve();
}