//https://codeforces.com/problemset/problem/474/B
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int worms[n];
	for (int i = 0; i < n; i++) {
		cin >> worms[i];
	}
	int search[n + 1];
	search[0] = 0;
	for (int i = 1; i <= n; i++) {
		search[i] = search[i - 1] + worms[i - 1];
	}
	int m;
	cin >> m;
	int juicy;
	for (int i = 0; i < m; i++) {
		cin >> juicy;
		cout << lower_bound(search, search + n + 1, juicy) - search << endl;
	}
	return 0;
}