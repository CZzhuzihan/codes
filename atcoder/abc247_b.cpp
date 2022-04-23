#include<bits/stdc++.h>
using namespace std;
string x[110],y[110];
map<string,int> s;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x[i]>>y[i];
		s[x[i]]++;
		if(x[i]!=y[i]) s[y[i]]++;
	}
	for(int i=0;i<n;i++){
		if(s[x[i]]>1&&s[y[i]]>1){
			cout<<"No";
			return 0;
		}
	}
	cout<<"Yes";
	return 0;
}
