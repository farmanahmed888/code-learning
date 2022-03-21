#include <bits/stdc++.h>
using namespace std;
void solve(){
	string s;
	cin>>s;
	int N = s.length();
	int arr[4];
	arr[0] = arr[1] = arr[2] = arr[3] = 0;
	for(int i = 0; i < N; i++){
		switch(s[i]){
			case 'r':
				arr[0]++;
				break;
			case 'u':
				arr[1]++;
				break;
			case 'b':
				arr[2]++;
				break;
			case 'y':
				arr[3]++;
				break;
		}
	}
	sort(arr,arr+4);
	cout<<arr[0]<<"\n";
}
int main(){
	int t;
	cin>>t;
	while(t--) solve();
	return 0;
}
