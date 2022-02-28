#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0);
using namespace std;

void solve(){
	int n;
	cin>>n;
	int a[n];
	for(int i = 0; i < n; i++) cin>>a[i];
	int arr[n];
	int l = 0;
	int high = n-1;
	arr[0] = a[0];
	int count = 1;
	for(int i = 1; i < n; i++){
		if(a[i] >= arr[count - 1]){
			arr[count] = a[i];
			count++;
		}else{
			int low = 0;
			int high = count;
			while(low < high){
				int mid = (low + high) / 2;
				if(arr[mid] > a[i]){
					high = mid;
				}else{
					low = mid + 1;
				}
			}
			arr[low] = a[i];
		}
	}
	cout<<count<<" ";
	for(int i = 0; i < count; i++) cout<<arr[i]<<" ";
	cout<<"\n";
}
int main(){
	fast	
	int t;
	cin>>t;
	while(t--)
		solve();
	return 0;
}