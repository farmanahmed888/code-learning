#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int N;
		cin>>N;
		if(N % 2 == 0){
			cout<< N/2<<"\n";
		}else{
			cout<<(N/2) + 1<<"\n";
		}
	}
	return 0;
}