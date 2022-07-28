#include<bits/stdc++.h>
using namespace std;
long long a[200010];
int main(){
	int n,q;
	cin>>n>>q;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,greater<int>());
	for(int i=1;i<=n;i++){
		a[i]+=a[i-1];
	}
	for(int i=0;i<q;i++){
		int x,y;
		cin>>x>>y;
		cout<<a[x]-a[x-y]<<endl;
	}
	return 0;
}