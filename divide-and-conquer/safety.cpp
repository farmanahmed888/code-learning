#include <bits/stdc++.h>
using namespace std;
int main() {
	cout<< "enter no of processes"<<"\n";
	int n;
	cin>> n;
	cout<< "enter no of resources"<<"\n";
	int r;
	cin>>r;
	int allocated[n][r];
	cout <<"enter allocated matrix"<<"\n";
	for(int i = 0; i < n; i++){
		for(int j = 0; j < r; j++){
			cin>>allocated[i][j];
		}
	}
	int max[n][r];
	cout<< "enter max requirement"<<"\n";
	for(int i = 0; i < n; i++){
		for(int j = 0; j < r; j++){
			cin>>max[i][j];
		}
	}
	int available[r];
	cout<<"enter available resources"<<"\n";
	for(int i = 0; i < r; i++) 
		cin>> available[i];
	int need[n][r];
	for(int i = 0; i < n; i++)
		for(int j = 0; j < r; j++)
			need[i][j] = max[i][j] - allocated[i][j];
	bool visited[n];
	for(int i = 0; i < n; i++)
		visited[i] = false;
	vector<int> v;
	for(int k = 0; k < n; k++){
		for(int i = 0; i < n; i++){
			if(!visited[i]){
				bool satisfied = true;
				for(int j = 0; j < r; j++){
					if(need[i][j] > available[j]){
						satisfied = false;
						break;
					}
				}
				if(satisfied){
					visited[i] = true;
					v.push_back(i);
					for(int j = 0; j < r; j++)
						available[j] += allocated[i][j];
				}
			}
		}
	}
	if (v.size() != n){
		cout<<"not safe";
	}else{
		for(auto x : v) cout<<x<<" ";
		cout<<"safe";
	}
	return 0;
}