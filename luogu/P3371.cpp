#include<bits/stdc++.h>
using namespace std;
set<pair<int,int> > s;
vector<pair<int,int> > a[400010];
long long d[100010]; 
int main(){
	int n,m,q;
	cin>>n>>m>>q;
	for(int i=0;i<m;i++){
		int x,y,z;
		cin>>x>>y>>z;
		a[x].push_back(make_pair(y,z));
	}
	for(int i=1;i<=n;i++){
		d[i]=2147483647;
	}
	d[q]=0;
	s.insert(make_pair(d[q],q));
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
	for(int i=1;i<=n;i++){
		cout<<d[i]<<' ';
	}
	return 0;
}
