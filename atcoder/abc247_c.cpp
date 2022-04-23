#include<bits/stdc++.h>
using namespace std;
int n;
string a;
void solve(int x){
	if(x==n+1) return;
	string b=to_string(x);
	if(x!=1) a=a+' '+b+' '+a;
	else a=b;
	solve(x+1);
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	solve(1);
	cout<<a;
	return 0;
}
