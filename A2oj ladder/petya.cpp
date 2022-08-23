#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    string s3 = "";
    int n = s2.length();;
    for(int i = 0; i < n; i++){
        if(s2[i]>='A' and s2[i]<='Z'){
            s2[i] = s2[i] - 'A';
            s3 += s2[i];
        }else{
            s2[i] = s2[i];
            s3 +=s2[i];
        }
    }
    cout<<s1<<"\n";
    cout<<s3<<"\n";
}