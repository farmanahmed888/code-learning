//https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-the-magical-candy-bags/?fbclid=IwAR2kDiVkEaxu9dkCTCUhzXLuIccNn0Gz3dSfkaSUjlDE6Nb9UHMzt8HNDo4
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	  int t;
	  cin>>t;
	  while(t--){
	  	int n,k;
	  	long long int ans = 0;
	  	cin>>n>>k;
	  	multiset<long long int, greater<long long int> > a;
	  	for(int i = 0; i < n; i++){
	  		long long int x;
	  		cin>>x;
	  		a.insert(x);
	  	}
	  	while(k--){
	  		long long int Max = *(a.begin());
	  		ans += Max;
	  		a.erase(a.begin());
	  		a.insert(Max / 2);
	  	}
	  cout<<ans<<"\n";
	  }
}