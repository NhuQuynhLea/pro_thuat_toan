#include <bits/stdc++.h>
using namespace std;
stack<int> q;
void check(string s)
{
    if (s == "init")
    {
        while (q.size())
            q.pop();
    }
    if (s == "push")
    {
        int x;
        cin >> x;
        q.push(x);
    }
    if (s == "pop")
        if (q.size())
            q.pop();
    if (s == "top")
    {
        if (q.empty())
            cout << "-1";
        else
            cout << q.top();
    }
    if (s == "size")
        cout << q.size();
    if (s == "empty")
        cout << q.empty();
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    while (1)
    {
        cin >> s;
        if (s == "end")
            break;
        check(s);
        cout << "\n";
    }
}
// int p;
// struct Stack
// {
//     int a[10005] = {};
//     void init()
//     {
//         p = 0;
//     };
//     void push(int n)
//     {
//         a[p++] = n;
//     }
//     bool empty()
//     {
//         if (p == 0)
//             return 1;
//         return 0;
//     }
//     int top()
//     {
//         return a[p];
//     }
//     void pop()
//     {
//         if (empty() != 0)
//             p--;
//     }
//     int size()
//     {
//         return p;
//     }
// };
// int main()
// {
//     Stack b;
//     string s;
//     while (1)
//     {
//         cin >> s;
//         if (s == "init")
//             b.init();
//         if (s == "push")
//         {
//             int x;
//             cin >> x;
//             b.push(x);
//         };
//     }
// }