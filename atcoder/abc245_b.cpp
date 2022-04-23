#include<bits/stdc++.h>
using namespace std;
int a[2010];
bool b[2010];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[a[i]]=1;
	}
	for(int i=0;;i++){
		if(!b[i]){
			cout<<i;
			break;
		}
	}
    return 0;
}
