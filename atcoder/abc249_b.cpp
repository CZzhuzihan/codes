#include<bits/stdc++.h>
using namespace std;
map<char,bool> g;
string s;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
    cin>>s;
    int A=0,a=0,z=1;
    for(int i=0;i<s.size();i++){
        if(s[i]>='a') a=1;
        else A=1;
        if(g[s[i]]) z=0;
        g[s[i]]=1;
    }
    if(A&&a&&z) cout<<"Yes";
    else cout<<"No";
	return 0;
}
