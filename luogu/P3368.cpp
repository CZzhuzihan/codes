#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500010];
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
		cin>>a[i];
	}
	for(int i=0;i<m;i++){
		int o;
		cin>>o;
		if(o==1){
			int x,y,k;
			cin>>x>>y>>k;
			change(x,k);
			change(y+1,-k);
		}
		else{
			int x;
			cin>>x;
			cout<<query(x)+a[x]<<endl;
		}
	}
}