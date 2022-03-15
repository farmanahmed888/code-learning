#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int N;
		cin>>N;
		int ans = 1;
		if(N < 6){
			ans = 0;
		}else{
			ans += (N - 6) / 7;
		}
		cout<<ans<<"\n";
	}
	return 0;
}