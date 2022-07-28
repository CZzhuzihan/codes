#include<bits/stdc++.h>
using namespace std;
const int p=998244353;
int n,m;
long long a[200010];
long long c0[200010];
long long c1[200010];
long long c2[200010];
void change(int x,long long y){
	y%=p;
	if(y<0) y+=p;
	for(int i=x;i<=n;i+=i&-i){
		c0[i]=(c0[i]+y)%p;
		c1[i]=(c1[i]+y*x)%p;
		c2[i]=(c2[i]+y*x%p*x)%p;
	}
}
long long query(int x){
	long long re0=0,re1=0,re2=0;
	for(int i=x;i>0;i-=i&-i){
		re0=(c0[i]+re0)%p;
		re1=(c1[i]+re1)%p;
		re2=(c2[i]+re2)%p;
	}
	long long re=(re0*(x+1)%p*(x+2)%p-(2*x+3)*re1%p+re2)%p;
	if(re<0) re+=p;
	if(re%2==1) re+=p;
	return re/2;
}
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		change(i,a[i]);
	}
	for(int i=0;i<m;i++){
		int o,x,y;
		cin>>o;
		if(o==2){
			cin>>x;
			cout<<query(x)<<endl;
		}
		else if(o==1){
			cin>>x>>y;
			change(x,y-a[x]);
			a[x]=y;
		}
	}
	return 0;
}