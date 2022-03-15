#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		string t;
		cin>>s;
		cin>>t;
		string ans = "";
		int N = 5;
		for(int i = 0; i < N; i++){
			if(s[i] == t[i]){
				ans += 'G';
			}else{
				ans += 'B';
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}