#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n ,k;
	cin>>n>>k;
	bool present = false;
	unordered_map <int,int> arr ;
	int inp[n];
	for(int i = 0; i < n; i++){
		cin>>inp[i];
	}
	for(int i = 0; i < n; i++){
		if(arr[k - inp[i]]){
			present = true;
			break;
		}
		arr[inp[i]]++;
	}
	if(present) cout<<"YES"<<"\n";
	else cout<<"NO"<<"\n";
}
int main(){
	solve();
}