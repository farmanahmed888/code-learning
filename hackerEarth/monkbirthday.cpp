//https://www.hackerearth.com/problem/algorithm/monks-birthday-party/?fbclid=IwAR3COuGp9LqoHKWOnfS-duVdKrF0Vx5shbCbGeiWqSgkdoA2z9926vNy5Ew
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		set<string> s;
		int n;
		cin>>n;
		for(int i  = 0; i < n; i++){
			string inp;
			cin>>inp;
			s.insert(inp);
		}
		for(auto it = s.begin(); it != s.end(); it++){
			cout<<*it<<"\n";
		}
	}	  
}