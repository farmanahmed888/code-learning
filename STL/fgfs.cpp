#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0);
using namespace std;
void solve(){
    int n,k;
	cin>>n>>k;
	std::map<int, vector<pair<int,int> > > mapa;
	for(int i = 0; i < n; i++){
		int s,f,p;
		cin>>s>>f>>p;
		mapa[p].emplace_back(f,s);
	}
	int ans = 0;
	for(auto x : mapa){
	    if(x.second.empty())continue;
	    sort(x.second.begin(), x.second.end());
		int t = 0;
		for(auto val : x.second){
			int f = val.first;
			int s = val.second;
			if(s >= t){
				ans++;
				t = f;
			}
		}
	}
	cout<<ans<<"\n";
}
int main(){
	int t;
	fast
	cin>>t;
	while(t--)solve();
	return 0;
}