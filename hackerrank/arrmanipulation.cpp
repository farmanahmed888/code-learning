//https://www.hackerrank.com/challenges/crush/problem?isFullScreen=true
#include<bits/stdc++.h>
using namespace std;
const int N = 1e7+7;
long arr[N+1];
long prefixSum[N+1];
int main(){
	int n,m;
	cin>>n>>m;
	while(m--){
		int a,b,k;
		cin>>a>>b>>k;
		arr[a] += k;
		arr[b + 1] -= k;
	}
	for(int i = 1; i <= n; i++){
		prefixSum[i] = prefixSum[i-1] + arr[i];
	}
	long max = -1;
	for(auto x : prefixSum)
		if(max < x)
			max = x;
	cout<<max<<"\n";
}