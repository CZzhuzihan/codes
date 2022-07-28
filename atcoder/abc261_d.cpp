#include<bits/stdc++.h>
using namespace std;
long long x[5010];
long long y[5010];
long long f[5010][5010];
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>x[i];
		y[i]=0;
	}
	y[0]=0;
	for(int i=1;i<=m;i++){
		int a,b;
		cin>>a>>b;
		y[a]=b;
	}
	for(int i=1;i<=n;i++){
		for(int j=0;j<i;j++){
			f[i+1][j+1]=max(f[i][j]+x[i]+y[j+1]/*-y[j-1]*/,f[i+1][j+1]);
			f[i+1][0]=max(f[i+1][0],f[i][j]);
		}
	}
	long long s=0;
	for(int i=0;i<=n+1;i++){
		s=max(s,f[n+1][i]);
	}
	cout<<s;
	return 0;
}