//https://codeforces.com/problemset/problem/58/A
#include<bits/stdc++.h>
using namespace std;

int main() {
	string hello = "hello";
	int i = 0;
	string input;
	cin>> input;
	int j = 0;
	while(i < hello.length()){
		while(j<input.length()){
			if(hello[i] == input[j]){
				i++;
				j++;
			}
			else j++; 
		}
		if(j == input.length()) break;
	}
	if(i==hello.length()) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}