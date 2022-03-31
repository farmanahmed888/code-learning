//https://www.codechef.com/START32B/problems/MAXTHEMIN
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		sort(arr, arr + n);
		if (k >= n - 1) {
			cout << arr[n - 1] << "\n";
		} else {
			cout << arr[k] << "\n";
		}
	}
	return 0;
}