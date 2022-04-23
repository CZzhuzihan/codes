#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long n,x,y,ans=0,xx=0,yy=0,l=1;
	cin>>n>>x>>y;
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		if(a==x) xx=i;
		if(a==y) yy=i;
		if(a>x||a<y) xx=0,yy=0,l=i+1;
		if(xx&&yy) ans+=min(xx,yy)-l+1;
	} 
	cout<<ans;
	return 0;
}
