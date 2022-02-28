#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
using namespace std;
//x = distance
//y = # of people
//p = distance
//q = # of people needed to convince
//r = # of people in tribe
struct eat
{
	ll x;
	ll y;
};
struct clans{
	ll p;
	ll q;
	ll r;
};
ll checker(vector<eat> dishes, vector<clans> assist, ll b, ll c, ll mid){
	ll i = 0;
	ll j = 0;
	while(i < b and j < c and mid > 0){
		if(dishes[i].x < assist[j].p){
			mid -= dishes[i].y;
			i++;
		}else{
			if(mid >= assist[j].q){
				mid += assist[j].r;
				j++;
			}else{
				j++;
			}	
		}
	}
	while(i < b){
		mid -= dishes[i].y;
		i++;
	}
	if(mid <= 0) return -1;
	else return 1;
}
void solve(){
	ll sum = 1;
	ll X;
	cin>>X;
	ll b;
	cin>>b;
	vector<eat> dishes;
	for(int i = 0; i <b; i++){
		eat input;
		cin>>input.x>>input.y;
		dishes.push_back(input);
		sum += input.y;
	}
	ll c;
	cin>>c;
	vector<clans> assist;
	if(c == 0){
		cout<<sum<<"\n";
	}else{
		for(int i = 0; i < c; i++){
			clans input;
			cin>>input.p>>input.q>>input.r;
			assist.push_back(input);
		}
		ll ans = sum;
		ll low = 1;
		ll high = sum;
		while(low < high){
			ll mid = (low + high) / 2;
			ll m = checker(dishes,assist,b,c,mid);
			if(m > 0){
				if(mid < ans) ans = mid;
				high = mid;
			}else{
				low = mid + 1;
			}
		}
		cout<<ans<<"\n";
	}

}
int main(){
	fast
	int t;
	cin>>t;
	while(t--) solve();
	return 0;
}