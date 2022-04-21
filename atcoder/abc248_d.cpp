#include<bits/stdc++.h>
using namespace std;
int a[200010];
vector<int> v[200010];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		v[a[i]].push_back(i);
	}
	for(int i=1;i<=n;i++){
		sort(v[i].begin(),v[i].end());
	}
	int q;
	cin>>q;
	for(int i=0;i<q;i++){
		int l,r,x;
		cin>>l>>r>>x;
		int p1=lower_bound(v[x].begin(),v[x].end(),l)-v[x].begin();
		int p2=upper_bound(v[x].begin(),v[x].end(),r)-v[x].begin();
		int z=p2-p1;
		cout<<z<<endl;
	}
	return 0;
}
