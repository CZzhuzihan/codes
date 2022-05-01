#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin>>T;
	while(T--){
		map<char,int> m;
		string a;
		cin>>a;
		for(int i=0;i<a.size();i++){
			m[a[i]]++;
		}
		while(m[a[0]]>1){
			m[a[0]]--;
			a.erase(a.begin());
		}
		cout<<a<<endl;
	}
    return 0;
}
