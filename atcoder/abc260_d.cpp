#include<bits/stdc++.h>
using namespace std;
int n,k;
int p[200010];
set<int> s;
int l=-1;
int a[200010];
vector<int> v[200020];
int z[200010];
int main(){
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>p[i];
	}
	for(int i=0;i<n;i++){
		set<int>::iterator it=s.upper_bound(p[i]);
		if(it==s.end()){
			s.insert(p[i]);
			a[p[i]]=++l;
			v[l].push_back(p[i]);
			if(k==1){
				z[p[i]]=i+1;
				s.erase(p[i]);
			}
		}
		else{
			int x=a[*it];
			a[p[i]]=x;
			v[x].push_back(p[i]);
			if(v[x].size()>=k){
				for(int j=0;j<v[x].size();j++){
					z[v[x][j]]=i+1;
				}
				s.erase(*it);
			}
			else{
				s.erase(*it);
				s.insert(p[i]);
			}
		}
		// for(int j=0;j<=l;j++){
		// 	for(int ii=0;ii<v[j].size();ii++){
		// 		cout<<v[j][ii]<<' ';
		// 	}
		// 	cout<<endl;
		// }
	}
	for(int i=1;i<=n;i++){
		if(z[i]!=0) cout<<z[i]<<endl;
		else cout<<-1<<endl;
	}
}