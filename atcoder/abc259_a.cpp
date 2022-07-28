#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,x,t,d;
	cin>>n>>m>>x>>t>>d;
	cout<<t-d*max(x-m,0);
	return 0;
}