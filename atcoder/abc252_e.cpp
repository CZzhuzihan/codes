#include<bits/stdc++.h>
using namespace std;
vector<pair<pair<int,int>,int>> a[200010];
set<pair<long long,int>> s;
long long d[200010];
int p[200010]; 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int x,y,z;
		cin>>x>>y>>z;
		a[x].push_back(make_pair(make_pair(y,z),i));
		a[y].push_back(make_pair(make_pair(x,z),i)); 
	} 
	memset(d,0x3f,sizeof d);
	d[1]=0;
	s.insert(make_pair(d[1],1));
	while(s.size()>0){
		pair<long long,int> u=*s.begin();
		s.erase(s.begin());
		for(auto i:a[u.second]){
			if(d[i.first.first]>d[u.second]+d[i.first.second]){
				s.erase(make_pair(d[i.first.first],i.first.first));
				d[i.first.first]=d[u.second]+d[i.first.second];
				p[i.first.first]=i.second;
				s.insert(make_pair(d[i.first.first],i.first.first));
			}
		}
	}
	for(int i=2;i<=n;i++){
		cout<<p[i]<<' ';
	}
	return 0;
}
