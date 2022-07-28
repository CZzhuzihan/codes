#include<bits/stdc++.h>
using namespace std;
int a[500010];
int b[500010];
int c[500010];
int n,m;
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
	cin>>n;
	m=n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	sort(b,b+n);
	m=unique(b,b+m)-b;
	for(int i=0;i<n;i++){
		a[i]=lower_bound(b,b+m,a[i])-b+1;
	}
	long long z=0;
	for(int i=n-1;i>=0;i--){
		z+=query(a[i]-1);
		change(a[i],1);
	}
	cout<<z;
}