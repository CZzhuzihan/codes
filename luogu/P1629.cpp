#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> > a[1010],b[1010];
int d[1010];
set<pair<int,int> > s; 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y,z;
		cin>>x>>y>>z;
		a[x].push_back(make_pair(y,z));
		b[y].push_back(make_pair(x,z));
	} 
	memset(d,0x3f,sizeof d);
	d[1]=0;
	s.insert(make_pair(d[1],1));
	while(s.size()){
		int u=s.begin()->second;
		s.erase(s.begin());
		for(int i=0;i<a[u].size();i++)
		{
		    pair<int,int> e=a[u][i];
			if(d[e.first]>d[u]+e.second)
			{
				s.erase(make_pair(d[e.first],e.first));
				d[e.first]=d[u]+e.second;
				s.insert(make_pair(d[e.first],e.first));
			}
		}
	}
	int z=0;
	for(int i=2;i<=n;i++){
		z+=d[i];
	}
	memset(d,0x3f,sizeof d);
	d[1]=0;
	s.insert(make_pair(d[1],1));
	while(s.size()){
		int u=s.begin()->second;
		s.erase(s.begin());
		for(int i=0;i<b[u].size();i++)
		{
		    pair<int,int> e=b[u][i];
			if(d[e.first]>d[u]+e.second)
			{
				s.erase(make_pair(d[e.first],e.first));
				d[e.first]=d[u]+e.second;
				s.insert(make_pair(d[e.first],e.first));
			}
		}
	}
	for(int i=2;i<=n;i++){
		z+=d[i];
	}
	cout<<z;
	return 0;
}
