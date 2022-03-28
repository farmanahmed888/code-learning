#include<bits/stdc++.h>
using namespace std;

bool subsequence(int i, int arr[], vector<int> &v, int n, int sum) {
	if (i >= n) {
		if (sum == 2) {
			cout << "{ ";
			for (auto x : v) {
				cout << x << " ";
			}
			cout << "}";
			cout << "\n";
			cout << sum << "\n";
			return true;
		}
		return false;
	}
	v.push_back(arr[i]);
	sum += arr[i];
	//before I was directly executing it, but we need to do a check
	//if we want to terminate.
	if (subsequence(i + 1, arr, v, n, sum) == true) {
		return true;
		
	}
	v.pop_back();
	sum -= arr[i];
	//before I was directly executing it, but we need to do a check
	//if we want to terminate.
	if (subsequence(i + 1, arr, v, n, sum) == true){
		return true;
	}
	return false;
}
int main() {
	int arr[] = {1, 2, 1};
	int n = 3;
	int i = 0;
	int sum = 0;
	vector<int> v;
	subsequence(i, arr, v, n, sum);
	return 0;
}