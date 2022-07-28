#include<bits/stdc++.h>
using namespace std;
long long n,x,y;
long long solve(long long z,int o){
	if(o==1){
		if(z==1) return 0LL;
		else return solve(z-1,1)+x*solve(z,0);
	}
	else{
		if(z==1) return 1LL;
		else return solve(z-1,1)+y*solve(z-1,0);
	}
}
int main(){
	cin>>n>>x>>y;
	cout<<solve(n,1);
}
