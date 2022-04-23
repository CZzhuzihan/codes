#include<bits/stdc++.h>
using namespace std;
int a[200010][2];
bool f[200010][2];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,k;
	cin>>n>>k;
	for(int i=0;i<n;i++) cin>>a[i][0];
	for(int i=0;i<n;i++) cin>>a[i][1];
	f[0][0]=1;
	f[0][1]=1;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<2;j++){
			if(!f[i][j]) continue;
			for(int l=0;l<2;l++){
				if(abs(a[i][j]-a[i+1][l])<=k) f[i+1][l]=1;
			}
		}
	}
	cout<<(f[n-1][0]||f[n-1][1]?"Yes":"No");
    return 0;
}
