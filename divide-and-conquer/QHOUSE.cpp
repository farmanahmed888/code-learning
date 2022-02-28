#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0);
using namespace std;
//a = square side
//h = height of triangle
//b = 0.5 * base of triangle

int squareArea(){
	int low = 0, high = 1001;
	string take;
	while (high > low + 1) {
		int m = (low + high) / 2;
		cout << "? " << m << " " << 0 << endl;
		cin >> take;
	if (take == "YES")
			low = m;
		else
			high = m;
	}
	return low;
}
int heightOfTriangle(){
	int low = 0, high = 1001;
	string take;
	while (high > low + 1) {
		int m = (low + high) / 2;
		cout << "? " << 0 << " " << m << endl;
		cin >> take;
	if (take == "YES")
			low = m;
		else
			high = m;
	}
	return low;
}
int lenBase(int x){
	int low = 0, high = 1001;
	string take;
	while (high > low + 1) {
		int m = (low + high) / 2;
		cout << "? " << m << " " << x << endl;
		cin >> take;
	if (take == "YES")
			low = m;
		else
			high = m;
	}
	return low;
}
void solve(){
	int low = 0, high = 1000;
	int a;
	int h;
	int b;
	a = squareArea();
	h = heightOfTriangle();
	b = lenBase(2*a);
	int area = 4 * a * a + (h - 2 * a) * b;
	cout<<"! "<<area<<"\n";
	cout<<endl;
}
int main(){
	fast
	solve();
	return 0;
}