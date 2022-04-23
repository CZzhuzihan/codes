#include<bits/stdc++.h>
using namespace std;
long long a[200010];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long n,k,x,s=0;
	cin>>n>>k>>x;
	for(int i=0;i<n;i++){
		cin>>a[i];
		long long b=a[i];
		if(k>0){
			if(a[i]/x<=k) a[i]%=x;
			else a[i]-=k*x;
			k-=(b-a[i])/x;
		}
		s+=a[i];
	}
	if(k>0){
		sort(a,a+n);
		for(long long i=n-1;i>=max(n-k,0LL);i--){
			s-=a[i];
			a[i]=0;
		}
	}
	cout<<s;
    return 0;
}
