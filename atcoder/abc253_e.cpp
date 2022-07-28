#include<bits/stdc++.h>
using namespace std;
long long p=998244353; 
long long f[1010][5010];
long long s[1010][5010];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int n,m,k;
	cin>>n>>m>>k; 
	for(int i=1;i<=m;i++){
		f[1][i]=1;
		s[1][i]=(s[1][i-1]+f[1][i])%p;
	}
	for(int i=2;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(k>0) f[i][j]=(s[i-1][max(j-k,0)]+(s[i-1][m]-s[i-1][min(j+k-1,m)]))%p;
			else f[i][j]=s[i-1][m];
			if(f[i][j]<0) f[i][j]+=p;
			s[i][j]=(s[i][j-1]+f[i][j])%p;
		}
	}
	long long z=0;
	for(int i=1;i<=m;i++){
		z+=f[n][i];
		z%=p;
	}
	cout<<z;
	return 0;
}

