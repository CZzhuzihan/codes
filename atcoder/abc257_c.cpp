#include<bits/stdc++.h>
using namespace std;
pair<int,int> w[200010];
int main(){
	int n,c=0;
	string s;
	cin>>n>>s;
	for(int i=0;i<n;i++){
		cin>>w[i].first;
		w[i].second=-(s[i]-'0');
		c+=(s[i]=='1');
	}
	sort(w,w+n);
	int z=0;
	for(int i=0;i<n;i++){
		if(w[i].second==-1) c--;
		else c++;
		z=max(z,c);
	}
	cout<<z;
	return 0;
}