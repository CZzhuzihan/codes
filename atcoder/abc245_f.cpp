#include<bits/stdc++.h>
using namespace std;
vector<int> a[200010];
int d[200010];
queue<int> q;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		a[y].push_back(x);
		d[x]++;
	}
	for(int i=1;i<=n;i++){
		if(d[i]==0){
			q.push(i);
		}
	}
	int ans=n;
	while(q.size()){
		int u=q.front();
		q.pop();
		ans--;
		for(int i:a[u]){
			if(!--d[i]){
				q.push(i);
			}
		}
	}
	cout<<ans;
    return 0;
}
