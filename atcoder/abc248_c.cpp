#include<bits/stdc++.h>
using namespace std;
const int p=998244353;
int f[60][2510];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,m,k;
	cin>>n>>m>>k;
	for(int i=1;i<=m;i++){
		f[1][i]=1;
	}
	for(int i=2;i<=n;i++){
		for(int j=1;j<=m;j++){
			for(int l=0;l<k;l++){
				if(l+j<=k) f[i][l+j]+=f[i-1][l];
				else break;
				f[i][l+j]%=p;
			}
		}
	}
	int z=0;
	for(int i=0;i<=k;i++){
		z=(z+f[n][i])%p;
	}
	cout<<z;
	return 0;
}
