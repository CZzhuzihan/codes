#include<bits/stdc++.h>
using namespace std;
char l[256];
char r[256];
void dfs(char c){
	if(c=='*') return;
	cout<<c;
	dfs(l[c]);
	dfs(r[c]);
}
int main(){
	int n;
	cin>>n;
	char rt;
	for(int i=0;i<n;i++){
		char x;
		cin>>x;
		cin>>l[x];
		cin>>r[x];
		if(i==0){
			rt=x;
		}
	}
	dfs(rt);
	return 0;
}