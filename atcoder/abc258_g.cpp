#include<bits/stdc++.h>
using namespace std;
char a[3010][3010];
vector<int> v[3010];
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
			if(a[i][j]=='1'){
				v[i].push_back(j);
			}
		}
	}
	long long s=0;
	for(int i=0;i<n;i++){
		for(int j=v[i].size()-1;j>=0;j--){
			int x=v[i][j];
			if(x<i) break;
			for(int k=v[x].size()-1;k>=0;k--){
				if(v[x][k]<x) break;
				if(a[v[x][k]][i]=='1'){
					s++;
				}
			}
		}
	}
	cout<<s;
}