#include<bits/stdc++.h>
using namespace std;
int n,m;
int c[500010];
void change(int x,int y){
	for(;x<=n;x+=x&-x){
		c[x]+=y;
	}
}
int query(int x){
	int re=0;
	for(;x>0;x-=x&-x){
		re+=c[x];
	}
	return re;
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		change(i,x);
	}
	for(int i=0;i<m;i++){
		int o,x,y;
		cin>>o>>x>>y;
		if(o==1) change(x,y);
		else{
			cout<<query(y)-query(x-1)<<endl;
		}
	}
}