#include<bits/stdc++.h>
using namespace std;
multiset<int> m;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int q;
	cin>>q;
	while(q--){
		int t;
		cin>>t;
		if(t==1){
			int x;
			cin>>x;
			m.insert(x);
		}
		if(t==2){
			int x,c;
			cin>>x>>c;
			int z=m.count(x);
			int y=min(c,z);
			auto w=m.find(x),w2=w;
			for(int j=0;j<y;j++) w2++;
			m.erase(w,w2);
		}
		if(t==3&&m.size()>0){
			auto it=m.end();
			it--;
			cout<<*it-*m.begin()<<endl;
		}
	} 
	return 0;
}
