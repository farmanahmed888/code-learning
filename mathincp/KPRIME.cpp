#include <bits/stdc++.h>
using namespace std;
int MAX = 1e5 +1;
int arr[MAX];
void precomputeSOE(){
	for(int i = 2; i < MAX; i++){
		if(arr[i] != 0) continue;
		for(int j = i; j <= MAX; j += i){
			arr[j]++;
		}
	}
}
int main(){
	precomputeSOE();
	int t;
	cin>>t;
	while(t--){
		int a,b,k;
		int count = 0;
		cin>>a>>b>>k;
		for(int i = a; i <= b; i++){
			if(arr[i] == k) count++;
		}
		count<<count<<"\n";
	}
}
