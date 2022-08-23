# include<bits/stdc++.h>
using namespace std;

int partition(int a[],int low,int high){
	int pivot = a[high];
	int left = low;
	int right = high -1;
	while(1){
		while(left <= right&& a[left] < pivot) left++;
		while(left <= right && a[right] > pivot) right--;
		if(left >= right) break;
		swap(a[left],a[right]);
		left++;
		right--;
	}
	swap(a[left],a[high]);
	return left;
}
void quicksort(int a[], int low, int high){
	if(low < high){
		int x = partition(a,low,high);
		quicksort(a,low,x-1);
		quicksort(a,x+1,high);
	}
}

int main(){
	int n,k;
	cin>>n>>k;
	int a[n+1]={0};
	for(int i = 0; i < n; i++) cin>>a[i];
	quicksort(a,0,n-1);
	cout<<a[k-1];
}
