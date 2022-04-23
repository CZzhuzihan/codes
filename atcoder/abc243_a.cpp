#include<bits/stdc++.h>
using namespace std;
int main(){
	int v,a,b,c;
	cin>>v>>a>>b>>c;
	v=v%(a+b+c);
	if(v<a) cout<<"F";
	else if(v<a+b) cout<<"M";
	else  cout<<"T";
    return 0;
}
