# include<bits/stdc++.h>
using namespace std;
 
void quicksort(int a[],int low,int high){
	int mid = (low+high)/2;
	int pivot = a[mid];
	int left = low;
	int right = high;
	while(left <= right){
		while(a[left] < pivot) left++;
		while(a[right] > pivot) right--;
		if(left <= right){
			swap(a[left],a[right]);
			left++;
			right--;
		}
	}
	if(left < high) quicksort(a,left, high);
	if(right > low) quicksort(a,low,right);
}

int main(){
	int n,k;
	cin>>n>>k;
	int a[n+1]={};
	for(int i = 0; i < n; i++) cin>>a[i];
	quicksort(a,0,n-1);
	cout<<a[k-1];
}

