//dem so ptu bang k
# include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,k;
	cin>>n>>k;
	int a[n] = {0};
	for(int i = 0; i < n; i++) cin>>a[i];
	sort(a,a+n);
	int x = lower_bound(a,a+n-1,k) - a;
	int y = upper_bound(a,a+n-1,k) - a;
	cout<<y - x;
}
