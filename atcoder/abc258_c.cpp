#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,q;
	cin>>n>>q;
	string s;
	cin>>s;
	int y=0;
	for(int i=0;i<q;i++){
		int o,x;
		cin>>o>>x;
		if(o==1){
			y=y+x;
			y=y%n;
		}
		if(o==2){
			cout<<s[(x-1-y+n)%n]<<endl;
		}
	}
	return 0;
}