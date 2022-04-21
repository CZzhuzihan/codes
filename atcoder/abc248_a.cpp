#include<bits/stdc++.h>
using namespace std;
map<char,bool> g;
int main(){
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++){
		g[s[i]]=1;
	}
	for(int i=0;i<=9;i++){
		if(g[i+'0']==0) cout<<i;
	}
	return 0;
}
