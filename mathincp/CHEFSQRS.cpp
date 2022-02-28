#include <bits/stdc++.h>
using namespace std;
int n;
int ans = INT_MAX;
void solve(){
	cin>>n;
	for(int x = 1; x * x <= n; x++){
		if(n % x == 0){
			int m = n / x;
			if(x + m % 2 == 0 and x != m){
				ans = min(ans, (m - x) / 2);
			}
		}
	}
	if(ans == INT_MAX) cout<<-1<<"\n";
	else cout<<ans<<"\n";
}
int main(){
	int t;
	cin>>t;
	while(t--) solve();
	return 0;
}