#include <bits/stdc++.h>
using namespace std;

void quicksort(int a[], int l, int r)
{
    int mid = (l + r) / 2;
    int pivot = a[mid];
    int i = l;
    int j = r;
    while (i <= j)
    {
        while (a[i] < pivot)
            i++;
        while (a[j] > pivot)
            j--;
        if (i <= j)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    if (i < r)
        quicksort(a, i, r);
    if (j > l)
        quicksort(a, l, j);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string x, y;
        cin >> x >> y;
        int a[100001] = {};
        int b[100001] = {};
        int k = 0, h = 0;
        for (int i = 0; i < x.size(); i++)
        {
            int j = x[i] - '0';
            a[k++] = j;
        }
        for (int i = 0; i < y.size(); i++)
        {
            int j = y[i] - '0';
            b[h++] = j;
        }
        quicksort(b, 0, h - 1);
        int j = h - 1;
        for (int i = 0; i < k; i++)
        {
            if (a[i] < b[j])
            {
                a[i] = b[j];
                j--;
            }
        }
        for (int i = 0; i < k; i++)
            cout << a[i];
        cout << "\n";
    }
}