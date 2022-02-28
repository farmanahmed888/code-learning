#include <bits/stdc++.h>
using namespace std;
bool search(vector<int> arr, int x, int n){
	int low = 0;
	int high = n - 1;
	while(low <= high){
		int mid = (low + high) / 2;
		if(x == arr[mid]){
			return true;
		}
		if(x < arr[mid]){
			high = mid - 1;
		}else{
			low = mid + 1;
		}
	}
	return false;
}
vector<int> primeFactors(){
	int n = 200;
    bool visited[n+1];
	vector<int> v;
	memset(visited,false,n+1);
	for(int i = 2; i*i <= n; i++){
		if(visited[i]) continue;
		v.push_back(i);
		for(int j = i; j <= n; j += i){
			visited[j] = true;
		}
	}		
	for(int i = 2; i <= n; i++){
		if(!visited[i]){
			v.push_back(i);
			visited[i] = true;
		}
	}
	return v;
}
int main(){
	vector<int> pr = primeFactors();
	vector<int> mul;
	for(int i = 0; i < pr.size(); i++){
		for(int j = i + 1; j < pr.size(); j++){
			mul.push_back(pr[i] * pr[j]);
		}
	}
	sort(mul.begin(),mul.end());
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>> n;
	    bool ans = false;
	    for(int i = 0; i < mul.size(); i++){
		    ans = search(mul,n-mul[i],mul.size());
		    if(ans) break;
	    }
	    if(ans) cout<<"YES"<<"\n";
	    else cout<<"NO"<<"\n";
	}
	return 0;
}
