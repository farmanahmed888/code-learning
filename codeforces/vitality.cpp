//https://codeforces.com/problemset/problem/525/A
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int c = 0;
	map<int,int> m;
	for(int i = 0;i < 2*n-2; i= i+ 2){
		char keys = s[i] - 'a';
		m[keys]++;
		char doors = s[i+1];
		if(m[doors - 'A'] == 0){
			c++;
		}else{
			m[doors - 'A']--;
		}
	}	
	cout<<c<<"\n";
}