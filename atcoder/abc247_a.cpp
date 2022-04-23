#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string a,b="0";
	cin>>a;
	for(int i=0;i<3;i++){
		b=b+a[i];
	}
	cout<<b;
	return 0;
}
