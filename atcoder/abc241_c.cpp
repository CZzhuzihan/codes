#include<bits/stdc++.h>
using namespace std;
int a[1010][1010];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			char c;
			cin>>c;
			if(c=='#') a[i][j]=1;
			else a[i][j]=0;
		} 
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n-5;j++){
			int s=0;
			for(int k=0;k<6;k++){
				if(a[i][j+k]) s++;
			}
			if(s>3){
				cout<<"Yes";
				return 0;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n-5;j++){
			int s=0;
			for(int k=0;k<6;k++){
				if(a[j+k][i]) s++;
			}
			if(s>3){
				cout<<"Yes";
				return 0;
			}
		}
	}
	for(int i=0;i<n-5;i++){
		for(int j=0;j<n-5;j++){
			int s1=0,s2=0;
			for(int x=0,y=0;x<6&&y<6;x++,y++){
				if(a[i+x][j+y]) s1++;
				if(a[i+x][j+5-y]) s2++; 
			}
			if(s1>3||s2>3){
				cout<<"Yes";
				return 0;
			}
		}
	}
	cout<<"No";
    return 0;
}
