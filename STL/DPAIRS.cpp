#include <bits/stdc++.h>;
using namespace std;
void solve(){
	int n,m;
	cin>>n>>m;
	std::vector<pair<int,int> > a;
	std::vector<pair<int,int> > b;
	for(int i = 0; i < n; i++){
		int input;
		cin>>input;
		a.push_back(make_pair(input,i));
	}
	for(int i = 0; i < m; i++){
		int input;
		cin>>input;
		b.push_back(make_pair(input,i));
	}
	std::vector<pair<int,int> > v;	
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	for(int i = 0; i < m; i++){
		v.push_back(make_pair(a[0].second,b[i].second));
	}
	for(int i = 1; i < n; i++){
		v.push_back(make_pair(a[i].second,b[m-1].second));
	}
	
	for(int i = 0; i < n+m-1; i++){
		cout<<v[i].first<<" "<<v[i].second<<"\n";
	}
	
}
int main(){
	solve();
	return 0;
}