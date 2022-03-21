//Way Too Long Words
#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int n = s.length();
		if(n > 10){
			string ans = "";
			char f = s[0];
			char l = s[n-1];
			ans += f;
			ans += to_string(n-2);
			ans += l;
			cout<<ans<<"\n";
		}else{
			cout<<s<<endl;
		}
		
	}
	return 0;
}