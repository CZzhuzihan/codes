#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long n;
	cin>>n;
	long long a=0,b=1e6;
	long long m=3e18;
	while(a<=b){
		long long x=a*a*a+a*a*b+a*b*b+b*b*b;
		if(x>=n) b--;
		else a++;
		if(x>=n&&x<m){
			m=x;
		}
	}
	cout<<m;
    return 0;
}
