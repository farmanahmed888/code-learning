#include<bits/stdc++.h>
using namespace std;
string solve(){
	long long n,m,x,y;
	cin>>n>>m>>x>>y;
	if((n-1) % x == 0 and (m-1) % y == 0){
		return "Chefirnemo";
	}
	else if(((n-2) % x == 0 and (m-2) % y == 0) and (n >= 2 and m >= 2)){
		return "Chefirnemo";
	}else{
		return "Pofik";
	}	
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string ans = solve();
		cout<<ans<<endl;
	}
	return 0;
}