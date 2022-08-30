# include<bits/stdc++.h>
using namespace std;

int bs(int a[],int l, int r,int x){
	
	while(l <= r){
		int mid = (l+r)/2;
		if(x == a[mid]) return mid;
		if(x < a[mid]) r = mid-1;
		if(x > a[mid]) l = mid+1;
	}
	return -1;
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,x;
	cin>>n>>x;
	int a[n] = {0};
	for(int i = 0; i < n; i++) cin>>a[i];
	sort(a,a+n);
	int ans = bs(a,0,n-1,x);
	if(ans >= 0) cout<<"YES";
	else cout<<"NO";
}
