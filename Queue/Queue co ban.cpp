#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    queue<int> q;
    while (n--)
    {
        int x;
        cin >> x;
        if (x == 1)
            cout << q.size();
        else if (x == 2)
        {
            if (q.empty())
                cout << "YES";
            else
                cout << "NO";
        }
        else if (x == 3)
        {
            int y;
            cin >> y;
            q.push(y);
        }
        else if (x == 4)
        {
            if (q.size())
                q.pop();
        }
        else if (x == 5)
        {
            if (q.size())
                cout << q.front();
            else
                cout << -1;
        }
        else
        {
            if (q.size())
                cout << q.back();
            else
                cout << -1;
        }
        cout << "\n";
    }
}
