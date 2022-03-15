#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	int NGE[n];
	stack<int>st;
	for(int i = 0; i < n; i++)	cin>>arr[i];
	//using index because of segmentation fault
	for(int i = 0; i < n; i++){
		while(!st.empty() and arr[i] > arr[st.top()]){
			NGE[st.top()] = i;
			st.pop();
		}
		st.push(i);
	}
	while(!st.empty()){
		NGE[st.top()] = -1;
		st.pop();
	}
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" "<<(NGE[i] == -1 ?-1:arr[NGE[i]]) <<"\n";
	}
	return 0;
}