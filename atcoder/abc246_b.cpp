#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	double a,b;
	cin>>a>>b;
	double c=sqrt(a*a+b*b);
	cout<<fixed<<setprecision(7)<<a/c<<' '<<b/c; 
    return 0;
}
