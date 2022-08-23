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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 1] = {};
        int b[100001] = {};
        int c[100001] = {};
        int dem = 0;
        int k = 0;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        quicksort(a, 0, n - 1);
        for (int i = 0; i < n; i++)
        {
            dem++;
            if (a[i] != a[i + 1])
            {
                b[k] = a[i];
                c[k] = dem;
                dem = 0;
                k++;
            }
        }
        for (int i = 0; i < k; i++)
        {
            for (int j = 0; j < k - 1; j++)
            {
                if (c[j] < c[j + 1])
                {
                    swap(c[j], c[j + 1]);
                    swap(b[j], b[j + 1]);
                }
            }
        }
        for (int i = 0; i < k; i++)
        {
            for (int j = 0; j < c[i]; j++)
            {
                cout << b[i] << " ";
            }
        }
        cout << "\n";
    }
}