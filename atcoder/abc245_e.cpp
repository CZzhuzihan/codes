#include<bits/stdc++.h>
using namespace std;
pair<int,int> a[200010];
pair<int,int> b[200010];
pair<pair<int,int>,int> c[400010];
multiset<int> s;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>c[i].first.second;
	for(int i=0;i<n;i++) cin>>c[i].first.first;
	for(int i=0;i<m;i++) cin>>c[i+n].first.second;
	for(int i=0;i<m;i++) cin>>c[i+n].first.first;
	for(int i=0;i<n;i++){
		c[i].second=0;
	}
	for(int i=0;i<m;i++){
		c[i+n].second=1;
	}
	sort(c,c+n+m);
	reverse(c,c+n+m);
	int f=1;
	for(int i=0;i<n+m;i++){
		if(c[i].second==1){
			s.insert(c[i].first.second);
		} 
		else{
			if(s.size()==0){
				f=0;
				break;
			}
			auto x=s.lower_bound(c[i].first.second);
			if(x==s.end()){
				f=0;
				break;
			}
			s.erase(x);
		}
	} 
	cout<<(f==1?"Yes":"No");
    return 0;
}
