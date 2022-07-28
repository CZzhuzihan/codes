#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[100010];
long long c0[100010];
long long c1[100010];
void change(long long c[],int x,long long y){
	for(;x<=n;x+=x&-x){
		c[x]+=y;
	}
}
long long query(long long c[],int x){
	long long re=0;
	for(;x>0;x-=x&-x){
		re+=c[x];
	}
	return re;
}
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		change(c0,i,a[i]);
		change(c1,i,a[i]*i);
	}
	for(int i=0;i<m;i++){
		char o[7];
		int x,y;
		cin>>o;
		if(*o=='Q'){
			cin>>x;
			cout<<(x+1)*query(c0,x)-query(c1,x)<<endl;
		}
		else if(*o=='M'){
			cin>>x>>y;
			change(c0,x,y-a[x]);
			change(c1,x,(y-a[x])*x);
			a[x]=y;
		}
	}
	return 0;
}