#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll fib[60] = {0};
void solve(){
    ll n;
    cin>>n;
    ll k = 1;
    while(k <= n){
        k = k * 2;
    }
    k = k / 2;
    k = k % 60;
    cout<<fib[k-1]%10<<endl;
}
int main() {
	// your code goes here
	fib[0] = 0;
	fib[1] = 1;
	for(int i = 2; i <= 60; i++){
	    fib[i] = fib[i - 1] + fib[i - 2];
	}
	int t;
	cin>>t;
	while(t--)solve();
	return 0;
}

