#include<bits/stdc++.h>
using namespace std;
const int p=100003;
vector<int> a[1000010];
int d[1000010];
int ans[10000010];
queue<int> q;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		a[x].push_back(y);
		a[y].push_back(x);
	}
	memset(d,-1,sizeof d);
	d[1]=0;
	ans[1]=1;
	q.push(1);
	while(q.size()){
		int u=q.front();
		q.pop();
		for(auto i:a[u]){
			if(d[i]==-1){
				d[i]=d[u]+1;
				q.push(i);
			}
			if(d[i]==d[u]+1){
				ans[i]=(ans[i]+ans[u])%p;
			}
		}
	}
	for(int i=1;i<=n;i++){
		cout<<ans[i]<<endl;
	}
	return 0;
}
