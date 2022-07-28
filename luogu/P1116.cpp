#include<bits/stdc++.h>
using namespace std;
int a[100010];
int c[100010];
int n;
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
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	long long z=0;
	for(int i=n-1;i>=0;i--){
		z+=query(a[i]-1);
		change(a[i],1);
	}
	cout<<z;
}