#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> v;
    pair<string, string> a;
    while (a.first != "END.")
    {
        cin >> a.first;
        if (a.first == "END.")
            break;
        if (a.first == "1")
        {
            cin >> a.second;
            v.push_back(a.second);
            cout << "NEW\n";
        }
        else
        {
            for (int i = 0; i < v.size(); i++)
                cout << v[i] << " ";
            v.erase(v.begin(), v.end());
            cout << "\n";
        }
    }
}