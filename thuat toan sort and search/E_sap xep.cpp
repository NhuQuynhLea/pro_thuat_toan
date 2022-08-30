# include<bits/stdc++.h>
using namespace std;

int partition( int a[],int low,int high){
	int pivot = a[high];
	int r = high -1;
	int l = low;
	while(1){
		while(l <= r&& a[l]< pivot) l++;
		while(l <= r&& a[r] > pivot) r--;
		if(l >= r) break;
		swap(a[l],a[r]);
		l++;
		r--;
	}
	swap(a[l],a[high]);
	return l;
}
void quicksort(int a[],int low,int high){
	if(low < high){
		int x = partition(a,low,high);
		quicksort(a,low,x-1);
		quicksort(a,x+1,high);
	}
}
int main(){
	int n;
	cin>>n;
	long long a[n+1]={};
	int b[100001]={};
	for(long long i = 0; i < n; i++) cin>>a[i];
	int k = 0;
	for(long long i = 0; i < n; i++){
		while(a[i] > 0){
			int x = a[i] % 10;
			b[k++] = x;
			a[i]/=10;
		}
	}	
	quicksort(b,0,k-1);
	for(long long i = 0; i< k;i++) cout<<b[i]<<" ";
}
