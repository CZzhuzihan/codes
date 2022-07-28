#include<bits/stdc++.h>
using namespace std;
int a[1010];
bool b[1010];
long long x[1010];
long long y[1010];
long long s[1010][1010];
long long z[1010];
int main(){
	int n,k;
	cin>>n>>k;
	for(int i=0;i<k;i++){
		cin>>a[i];
		a[i]--;
		b[a[i]]=1;
	}
	for(int i=0;i<n;i++){
		cin>>x[i]>>y[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			s[i][j]=(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);
		}
	}
	for(int i=0;i<n;i++){
		if(b[i]==0) z[i]=1e18;
	}
	for(int i=0;i<k;i++){
		for(int j=0;j<n;j++){
			if(b[j]==0){
				z[j]=min(z[j],s[a[i]][j]);
			}
		}
	}
	long long ans=0;
	for(int i=0;i<n;i++){
		if(b[i]==0) ans=max(ans,z[i]);
	}
	double ans2=ans;
	cout<<sqrt(ans);
	return 0;
}