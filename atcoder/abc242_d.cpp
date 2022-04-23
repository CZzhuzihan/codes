#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
	int q;
	cin>>s>>q;
	for(int i=0;i<q;i++){
		long long t,k;
		cin>>t>>k;
		k--;
		long long p=0;
		if(t<60){
			p=k>>t;
			k%=(1LL<<t);
		}
		cout<<char((s[p]-'A'+(t+__builtin_popcountll(k)))%3+'A')<<endl;
	}
	return 0;
}
