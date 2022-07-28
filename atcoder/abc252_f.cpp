#include<bits/stdc++.h>
using namespace std;
long long a[200010];
multiset<long long> c;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	long long n,l,s=0;
	cin>>n>>l;
	for(int i=0;i<n;i++){
		cin>>a[i]; 
		s+=a[i];
		c.insert(a[i]);
	} 
	long long ans=0;
	if(l-s!=0) c.insert(l-s);
	while(c.size()!=1){
		long long x,y;
		x=*c.begin();
		c.erase(c.begin());
		y=*c.begin();
		c.erase(c.begin());
		ans+=(x+y);
		c.insert(x+y);
	}
	cout<<ans;
	return 0;
}
