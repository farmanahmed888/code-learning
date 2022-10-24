#include <bits/stdc++.h>
using namespace std;
void solve(){
	string s;
	cin>>s;
	int count = 0;
	int ans = 0;
	for(int i = 0; i < s.length(); i++){
		char c = s[i];
		if(c == '<'){
			count++;
		}
		else{
			count--;//
		}
		if(count == -1){
		    ans = i;
		    break;
		}
		if(count == 0){
		    ans = i+1;
		}
	}
	cout<<ans<<"\n";
}
int main(){
	int t;
	cin>>t;
	while(t--) solve();
}