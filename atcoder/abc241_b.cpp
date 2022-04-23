#include<bits/stdc++.h>
using namespace std;
map<int,int> a;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		a[x]++;
	}
	for(int i=0;i<m;i++){
		int x;
		cin>>x;
		a[x]--;
		if(a[x]<0){
			cout<<"No";
			return 0;
		}
	}
	cout<<"Yes";
    return 0;
}
