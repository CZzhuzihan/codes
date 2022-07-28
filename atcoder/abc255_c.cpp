#include<bits/stdc++.h>
using namespace std;
int main(){
	long long x,n,a,d;
	cin>>x>>a>>d>>n;
	long long b=a+(n-1)*d;
	if(a>b){
		swap(a,b);
		d=-d;
	}
	if(x<=a) cout<<llabs(x-a);
	else if(x>=b) cout<<llabs(b-x);
	else{
		long long y=x-a;
		cout<<llabs(min(y%d,d-y%d));
	}
	return 0;
}