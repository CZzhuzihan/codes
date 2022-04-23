#include<bits/stdc++.h>
using namespace std;
int main(){
	double a,b,c,x;
	cin>>a>>b>>c>>x;
	if(x<=a) cout<<1;
	else if(x>b) cout<<0;
	else cout<<fixed<<setprecision(10)<<c/(b-a);
    return 0;
}
