#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int x = n % (k + 1);
    if (x % 2 == 0 && x % k != 0)
        cout << "Hanako";
    else
        cout << "Taro";
}