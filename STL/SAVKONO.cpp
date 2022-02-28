<html>
                    <head>
                        <meta name='robots' content='noindex, nofollow' />
                    </head>
                    <body>
                        <pre>#include &lt;bits/stdc++.h&gt;
using namespace std;
int solve(){
	int n,z;
	cin&gt;&gt;n&gt;&gt;z;
	priority_queue&lt;int&gt; a;
	for(int i = 0; i &lt; n; i++){
		int input;
		cin&gt;&gt;input;
		a.push(input);
	}
	int count = 0;
	while(!a.empty()){
		count++;
		int decrese = a.top();
		z = z - decrese;
		a.pop();
		if(decrese/2 &gt; 0)a.push(decrese/2);
		if(z &lt;= 0) break;
	}
	if(z &gt; 0) cout&lt;&lt; &quot;Evacuate&quot; &lt;&lt;&quot;\n&quot;;
	else cout&lt;&lt;count&lt;&lt;&quot;\n&quot;;

}
int main(){
	int t;
	cin&gt;&gt;t;
	while(t--)
		solve();
	return 0;
}
</pre>
                    </body>
                </html>