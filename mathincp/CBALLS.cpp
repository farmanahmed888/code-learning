#include <bits/stdc++.h>
const int N = 10000;
int visited[10001];
void seive(){
	for(int i = 0; i <= N; i++) visited[i] = i;
	for(int i = 2; i*i <= N; i++){
		if(visited[i] == i){
			for(int j = i*i; j <= N; j += i){
				visited[j] = i;
			}
		}	
	}
}
int main(){
	
	return 0;
}
