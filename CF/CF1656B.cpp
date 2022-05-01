#include<bits/stdc++.h>
using namespace std;
int a[200010];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin>>T;
	while(T--){
		int n,k;
		cin>>n>>k;
		set<int> s;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			s.insert(x);
		}
		int f=0;
		for(int i:s){
			if(s.find(i+k)!=s.end()) f=1;
		}
		cout<<(f?"YES":"NO")<<endl;
	} 
    return 0;
}
