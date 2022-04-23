#include<bits/stdc++.h>
using namespace std;
pair<pair<int,int>,char> a[200010];
map<int,int> mi;
map<int,int> ma;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i].first.second>>a[i].first.first;
		mi[a[i].first.first]=1e9;
	}
	for(int i=0;i<n;i++){
		cin>>a[i].second;
	}
	for(int i=0;i<n;i++){
		if(a[i].second=='R'){
			mi[a[i].first.first]=min(mi[a[i].first.first],a[i].first.second);
		}
		if(a[i].second=='L'){
			ma[a[i].first.first]=max(ma[a[i].first.first],a[i].first.second);
		}
	}
	for(int i=0;i<n;i++){
		if(mi[a[i].first.first]<ma[a[i].first.first]){
			cout<<"Yes";
			return 0;
		}
	}
	cout<<"No";
    return 0;
}
