<html>
                    <head>
                        <meta name='robots' content='noindex, nofollow' />
                    </head>
                    <body>
                        <pre>#include &lt;bits/stdc++.h&gt;
using namespace std;
void solve(){
	int n,m,k;
	cin&gt;&gt;n&gt;&gt;m&gt;&gt;k;
	set&lt;pair&lt;int,int&gt;&gt; mapa;
	for(int i  = 0; i &lt; k; i++){
		int x,y;
		cin&gt;&gt;x&gt;&gt;y;
		mapa.insert({x,y});
	}
	int ans  = 4*k;
	for(auto values : mapa){
		if(mapa.find({values.first + 1, values.second}) != mapa.end()) ans--;
		if(mapa.find({values.first, values.second + 1}) != mapa.end()) ans--;
		if(mapa.find({values.first - 1, values.second}) != mapa.end()) ans--;
		if(mapa.find({values.first, values.second - 1}) != mapa.end()) ans--;
	}
	cout&lt;&lt;ans&lt;&lt;&quot;\n&quot;;
}
int main(){
	int t;
	cin&gt;&gt;t;
	while(t--)solve();
}
</pre>
                    </body>
                </html>