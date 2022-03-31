//https://codeforces.com/problemset/problem/160/A
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0 ; i < n; i++) cin >> arr[i];
	sort(arr, arr + n);
	int myshare = 0;
	int hisshare = 0;
	int cnt = 0;
	for (int i = 0; i <= n - 1; i++) hisshare += arr[i];
	for (int i = n - 1; i >= 0; i--) {
		if (myshare <= hisshare) {
			myshare += arr[i];
			hisshare -= arr[i];
			cnt++;
		}
	}
	cout << cnt << "\n";
	return 0;
}