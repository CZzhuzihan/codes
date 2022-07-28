#include<bits/stdc++.h>
using namespace std;
char a[1010][1010];
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	int z=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j) continue;
			if(a[i][j]=='D'&&a[j][i]!='D'){
				z=0;
				break;
			}
			if(a[i][j]=='W'&&a[j][i]!='L'){
				z=0;
				break;
			}
			if(a[i][j]=='L'&&a[j][i]!='W'){
				z=0;
				break;
			}
		}
	}
	if(z==0) cout<<"incorrect";
	else cout<<"correct";
	return 0;
}