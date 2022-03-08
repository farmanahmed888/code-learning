#include <bits/stdc++.h>
using namespace std;
void solve(){
	int N,Q;
	cin>>N>>Q;
	int a[N + 1];
	for(int i = 1; i <= N; i++){
		cin>>a[i];
	}
	int forward[N+10];
	int backward[N+10];
	forward[0] = backward[N+1] = 0;
	for(int i = 1; i <= N; i++){
		forward[i] = __gcd(forward[i-1],a[i]);
	}
	for(int i = N; i >= 1; i--){
		backward[i] = __gcd(backward[i+1],a[i]);
	}
	while(Q--){
		int L,R;
		cin>>L>>R;
		int ans = 0;
		ans = __gcd(forward[L-1],backward[R+1]);
		cout<<ans<<"\n";
	}
}
int main(){
	int t;
	cin>>t;
	while(t--) solve();
}