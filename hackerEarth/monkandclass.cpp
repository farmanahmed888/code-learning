//https://www.hackerearth.com/problem/algorithm/the-monk-and-class-marks/?fbclid=IwAR09BMLG-1NhqDlVQq0KIzSr8ZTgqrbJmdfnsXc7KnDiphgX5UmbFLoEYjE
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	map<int,multiset<string> > m;
	while(n--){
		string nm;
		int marks;
		cin>>nm>>marks;
		m[marks].insert(nm);
	}
	for(auto it = m.rbegin(); it != m.rend(); it++){
		for(auto &y : (*it).second){
			cout<<y<<" "<<(*it).first<<"\n";
		}	
	}
}
