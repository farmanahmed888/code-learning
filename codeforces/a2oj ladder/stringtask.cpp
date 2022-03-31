//https://codeforces.com/problemset/problem/118/A
#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	vector<char> vowels = {'A', 'O', 'Y', 'E', 'U', 'I',
	                       'a', 'o', 'y', 'e', 'u', 'i'
	                      };
	string ans = "";
	for (int i = 0; i < s.length(); i++) {
		if (find(vowels.begin(), vowels.end(), s[i]) == vowels.end()) {
			ans += '.';
			if (s[i] >= 'a')
				ans += s[i];
			else
				ans += (s[i] + 32);
		}
	}
	cout << ans << endl;
	return 0;
}