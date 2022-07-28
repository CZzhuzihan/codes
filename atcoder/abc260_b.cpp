#include<bits/stdc++.h>
using namespace std;
pair<int,int> a[1010];
pair<int,int> b[1010];
pair<int,int> c[1010];
bool u[1010];
vector<int> v;
int main(){
	int n,x,y,z;
	cin>>n>>x>>y>>z;
	for(int i=0;i<n;i++){
		cin>>a[i].first;
		a[i].second=n-i;
	}
	for(int i=0;i<n;i++){
		cin>>b[i].first;
		b[i].second=n-i;
		c[i].first=a[i].first+b[i].first;
		c[i].second=n-i;
	}
	sort(a,a+n,greater<pair<int,int>>());
	sort(b,b+n,greater<pair<int,int>>());
	sort(c,c+n,greater<pair<int,int>>());
	for(int i=0;i<x;i++){
		u[a[i].second]=1;
		v.push_back(n-a[i].second);
	}
	for(int i=0,j=0;j<y&&i<n;i++){
		if(u[b[i].second]==0){
			u[b[i].second]=1;
			v.push_back(n-b[i].second);
			j++;
		}
	}
	for(int i=0,j=0;j<z&&i<n;i++){
		if(u[c[i].second]==0){
			u[c[i].second]=1;
			v.push_back(n-c[i].second);
			j++;
		}
	}
	sort(v.begin(),v.end());
	for(int i=0;i<x+y+z;i++){
		cout<<v[i]+1<<endl;
	}
}