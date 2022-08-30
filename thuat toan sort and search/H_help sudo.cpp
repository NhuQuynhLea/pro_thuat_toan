# include<bits/stdc++.h>
using namespace std;
int binarysearch(int a[],int n,int x){
	int r = n-1;
	int l = 0;
	while(r >= l){
		int mid = (l+r)/2;
		if(a[mid] == x) return 1;
		if(a[mid] > x) r = mid -1;
		if(a[mid] < x) l = mid + 1;
	}
	return 0;
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,x;
	cin>>n>>x;
	int a[n+1] = {0};
	for(int i = 0; i < n; i++) cin>>a[i];
	int ans = binarysearch(a,n,x);
	if(ans == 1) cout<<"YES";
	else cout<<"NO";
}
