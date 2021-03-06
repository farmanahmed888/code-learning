#include<bits/stdc++.h>
using namespace std;

int n;
const int N = 1e5 + 7;
long long int pos[N];
int c;

bool predicate(int dist) {
	int lastPos = pos[0];
	int cnt = 1;
	for (int i = 1; i < n; i++) {
		if (pos[i] - lastPos >= dist) {
			cnt++;
			if (cnt == c) return true;
			lastPos = pos[i];
		}

	}
	return false;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> n >> c;
		for (int i = 0; i < n; i++) {
			cin >> pos[i];
		}
		sort(pos, pos + n);
		int lo = 0;
		int hi = 1e9;
		while (lo < hi) {
			int mid = (lo + hi) / 2;
			if (predicate(mid)) {
				lo = mid + 1;
			} else {
				hi = mid;
			}
		}
		cout << hi - 1 << endl;
	}
}