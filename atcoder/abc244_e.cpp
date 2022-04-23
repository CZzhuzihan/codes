#include<bits/stdc++.h>
using namespace std;
const int p=998244353;
vector<int> v[2010];
long long f[2010][2010][2];
int n,m,k,s,t,z,x,y;
int main(){
	cin>>n>>m>>k>>s>>t>>z;
	for(int i=0;i<m;i++){
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	f[0][s][0]=1;
	for(int i=0;i<k;i++){
		for(int j=1;j<=n;j++){
			for(int l=0;l<v[j].size();l++){
				for(int q=0;q<2;q++){
					if(j!=z) f[i+1][j][q]+=f[i][v[j][l]][q]%p;
					else f[i+1][j][(q+1)%2]+=f[i][v[j][l]][q]%p;
				}
			}
		}
	}
	cout<<f[k][t][0]%p;
    return 0;
}
