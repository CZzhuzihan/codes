#include<bits/stdc++.h>
using namespace std;
int a[10][110];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<10;j++){
			char x;
			cin>>x;
			a[x-'0'][i]=j;
		}
	} 
	int ans=1e9;
	for(int i=0;i<10;i++){
		int b[1010];
		int z=0;
		memset(b,0,sizeof b); 
		for(int j=0;j<n;j++){
			int s=0;
			while(b[a[i][j]+s*10]==1){
				s++;
			}
			z=max(s*10+a[i][j],z);
			b[s*10+a[i][j]]=1;
		}
		ans=min(ans,z);
	}
	cout<<ans;
	return 0;
}

