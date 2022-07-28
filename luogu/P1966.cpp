#include <bits/stdc++.h>
using namespace std;
int n,m;
pair<int,int> a[100010];
pair<int,int> b[100010];
int r[100010];
int c[100010];
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
int main() {
	cin>>n;
	for(int i=0;i<n;i++) {
		cin>>a[i].first;
		a[i].second=i;
	}
	for(int i=0;i<n;i++) {
		cin>>b[i].first;
		b[i].second=i;
	}
	sort(a,a+n);
	sort(b,b+n);
	for(int i=0;i<n;i++){
		r[a[i].second]=b[i].second+1;
	}
	long long z=0;
	for(int i=0;i<n;i++) {
		z+=i-query(r[i]);
		change(r[i],1);
	}
	cout<<z%99999997;
	return 0;
}