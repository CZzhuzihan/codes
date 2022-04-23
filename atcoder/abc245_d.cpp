#include<bits/stdc++.h>
using namespace std;
long long a[210];
long long b[210];
long long c[210];
int ans[210];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<=n;i++) cin>>a[i];
	for(int i=0;i<=n+m;i++) cin>>c[i];
	reverse(a,a+n+1);
	reverse(c,c+n+m+1);
	for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++){
			b[j]=a[j]*(c[i]/a[0]);
		}
		ans[i]=c[i]/a[0];
		for(int j=0;j<=n;j++){
			c[i+j]-=b[j];
		}
	}
	reverse(ans,ans+m+1);
	for(int i=0;i<=m;i++){
		cout<<ans[i]<<' ';
	} 
    return 0;
}
