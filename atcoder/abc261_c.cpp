#include<bits/stdc++.h>
using namespace std;
map<string,int> m;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string x;
		cin>>x;
		m[x]++;
		if(m[x]==1) cout<<x<<endl;
		else cout<<x<<"("<<m[x]-1<<")"<<endl;
	}
	return 0;
}