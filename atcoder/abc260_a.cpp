#include<bits/stdc++.h>
using namespace std;
map<char,int> m;
int main(){
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++){
		m[s[i]]++;
	}
	int f=-1;
	for(int i=0;i<s.size();i++){
		if(m[s[i]]==1){
			cout<<s[i];
			f=0;
			break;
		}
	}
	if(f==-1) cout<<f;
}