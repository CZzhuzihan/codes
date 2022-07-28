#include<bits/stdc++.h>
using namespace std;
long long a[200010];
long long b[200010];
long long s=0;
int main(){
	long long n,q;
	cin>>n>>q;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	//for(int i=1;i<=n;i++){
	//	cout<<a[i]<<' ';
	//}
	//cout<<endl;
	for(int i=1;i<=n;i++){
		b[i]+=(b[i-1]+a[i]);
	}
	//for(int i=1;i<=n;i++){
	//	cout<<b[i]<<' ';
	//}
	//cout<<endl;
	for(int i=0;i<q;i++){
		long long x;
		cin>>x;
		int p=lower_bound(a+1,a+n+1,x)-a;
		p--;
		long long s1=p*x-b[p];
		long long s2=b[n]-b[p]-(n-p)*x;
		//cout<<p<<' '<<a[p]<<' '<<s1<<' '<<s2<<endl;
		cout<<llabs(s1)+llabs(s2)<<endl;
	}
	return 0;
}