#include<bits/stdc++.h>
using namespace std;
int f[20];
bitset<19000010>b;
bitset<1000010>v;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	for(int k=1;k<20;k++){
		for(int j=1;j<=m;j++){
			b[k*j]=1;
		}
		f[k]=b.count();
	}
	long long z=1;
	for(int i=2;i<=n;i++){
		if(v[i]) continue;
		int c=0;
		for(long long j=i;j<=n;j*=i){
			v[j]=1;
			c++;
		}
		z+=f[c];
	}
	cout<<z;
	return 0;
}
