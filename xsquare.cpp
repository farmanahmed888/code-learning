#include <bits/stdc++.h>
using namespace std;
int arr[27];
void solve(){
	string s;
	cin>>s;
	int n = s.length();
	bool isPossible = false;
	for(int i = 0; i < 26; i++) arr[i] = 0;
	for(int i = 0; i < n; i++){
		arr[s[i] - 97]++;
		if(arr[s[i] - 97] > 1){
			isPossible = true;
			cout<<"Yes"<<"\n";
			break;
		}
	}
	if(isPossible == false) 
		cout<<"No"<<"\n";
}
int main(){
	int q;
	cin>>q;
	while(q--) solve();
}