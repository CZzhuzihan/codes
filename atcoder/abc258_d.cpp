#include<bits/stdc++.h>
using namespace std;
long long a[200010];
int b[200010];
int main(){
	int n,x;
	cin>>n>>x;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	a[0]=0;
	for(int i=2;i<=n;i++){
		a[i]=a[i]+a[i-1]+b[i-1];
	}
	long long mi=9*1e18;
	for(int i=1;i<=min(n,x);i++){
		long long s=0;
		s+=a[i];
		long long y=x-i+1;
		s+=(y*b[i]);
		mi=min(mi,s);
	}
	cout<<mi;
	return 0;
}