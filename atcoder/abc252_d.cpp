#include<bits/stdc++.h>
using namespace std;
long long a[200010];
long long m[200010]; 
int main(){
	long long n,s=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		m[a[i]]++;
		s++;
	}
	long long z1=n*(n-1)*(n-2)/6,z2=0,z3=0;
	for(int i=1;i<=200000;i++){
		if(m[i]>=3) z3+=(m[i]*(m[i]-1)*(m[i]-2)/6);
	}
	for(int i=1;i<=200000;i++){
		z2+=(m[i]*(m[i]-1)/2*(s-m[i]));
	}
	cout<<z1-z2-z3;
}