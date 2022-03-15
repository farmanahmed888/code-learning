#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int N, X;
		cin>>N>>X;
		int x = (N + X) / 4;
		int z = (N + X) % 4;
		if(N - (x + z) >= 0){
			cout<<"YES\n";
			int y = N - (x + z);
			cout<<x<<" "<<y<<" "<<z<<"\n";
		}else{
			cout<<"NO\n";
		}
	}
	return 0;
}