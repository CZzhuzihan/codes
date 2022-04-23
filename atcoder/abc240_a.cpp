#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	if(a<b) swap(a,b);
	if(a-b==1||(a==10&&b==1)) cout<<"Yes";
	else cout<<"No";
    return 0;
}
