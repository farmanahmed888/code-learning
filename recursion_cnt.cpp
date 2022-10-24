#include<bits/stdc++.h>
using namespace std;

int subsequence(int i, int arr[], vector<int> &v, int n, int sum) {
	if (i >= n) {
		if (sum == 2) {
			cout << "{ ";
			for (auto x : v) {
				cout << x << " ";
			}
			cout << "}";
			cout << "\n";
			return 1;
		}//
		return 0;
	}
	v.push_back(arr[i]);
	sum += arr[i];
	int l = subsequence(i + 1, arr, v, n, sum);
	v.pop_back();
	sum -= arr[i];
	int r = subsequence(i + 1, arr, v, n, sum);
	return l + r;
}
int main() {
	int arr[] = {1, 1, 1};
	int n = 3;
	int i = 0;
	int sum = 0;
	vector<int> v;
	int ans = subsequence(i, arr, v, n, sum);
	cout << "count : " << ans << "\n";
	return 0;
}