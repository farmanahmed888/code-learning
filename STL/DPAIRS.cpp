<html>
                    <head>
                        <meta name='robots' content='noindex, nofollow' />
                    </head>
                    <body>
                        <pre>#include &lt;bits/stdc++.h&gt;
using namespace std;
void solve(){
	int n,m;
	cin&gt;&gt;n&gt;&gt;m;
	std::vector&lt;pair&lt;int,int&gt; &gt; a;
	std::vector&lt;pair&lt;int,int&gt; &gt; b;
	for(int i = 0; i &lt; n; i++){
		int input;
		cin&gt;&gt;input;
		a.push_back(make_pair(input,i));
	}
	for(int i = 0; i &lt; m; i++){
		int input;
		cin&gt;&gt;input;
		b.push_back(make_pair(input,i));
	}
	std::vector&lt;pair&lt;int,int&gt; &gt; v;	
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	for(int i = 0; i &lt; m; i++){
		v.push_back(make_pair(a[0].second,b[i].second));
	}
	for(int i = 1; i &lt; n; i++){
		v.push_back(make_pair(a[i].second,b[m-1].second));
	}
	
	for(int i = 0; i &lt; n+m-1; i++){
		cout&lt;&lt;v[i].first&lt;&lt;&quot; &quot;&lt;&lt;v[i].second&lt;&lt;&quot;\n&quot;;
	}
	
}
int main(){
	solve();
	return 0;
}
</pre>
                    </body>
                </html>