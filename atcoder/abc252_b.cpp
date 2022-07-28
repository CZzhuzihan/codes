#include<bits/stdc++.h>
using namespace std;
int a[110];
int b[110];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int n,k,s=0;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>a[i];
		s=max(s,a[i]);
	}
	int f=0;
	for(int i=0;i<k;i++){
		cin>>b[i];
		if(a[b[i]-1]==s) f=1;
	}
	cout<<(f?"Yes":"No");
	return 0;
}
