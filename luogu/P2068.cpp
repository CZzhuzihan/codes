#include<bits/stdc++.h>
using namespace std;
int n,m;
long long c[100010];
void change(long long x,long long y){
	for(;x<=n;x+=x&-x){
		c[x]+=y;
	}
}
long long query(long long x){
	long long re=0;
	for(;x>0;x-=x&-x){
		re+=c[x];
	}
	return re;
}
int main(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		char o;
        long long x,y;
		cin>>o>>x>>y;
		if(o=='x') change(x,y);
		else{
			cout<<query(y)-query(x-1)<<endl;
		}
	}
}