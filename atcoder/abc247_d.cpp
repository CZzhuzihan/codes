#include<bits/stdc++.h>
using namespace std;
vector<pair<long long,long long>> v;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q;
	cin>>q;
	for(int i=0;i<q;i++){
		int x;
		cin>>x;
		if(x==1){
			int y,c;
			cin>>y>>c;
			v.push_back(make_pair(c,y));
		}
		if(x==2){
			int y;
			cin>>y;
			long long s1=0,s2=0;
			for(int i=0;i<v.size();i++){
				if(v[i].first==0){
					v.erase(v.begin()+i);
					i--;
					continue;
				}
				if(s2+v[i].first<=y){
					s1+=v[i].first*v[i].second;
					s2+=v[i].first;
					v[i].first=0;
				}
				else{
					s1+=(y-s2)*v[i].second;
					v[i].first-=(y-s2);
					break;
				}
				if(s2==y) break;
			}
			cout<<s1<<endl;
		}
	}
	return 0;
}
