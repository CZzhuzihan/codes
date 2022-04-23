#include<bits/stdc++.h>
using namespace std;
long long s[1000010][10];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	s[1][1]=1;
	s[1][2]=1;
	s[1][3]=1;
	s[1][4]=1;
	s[1][5]=1;
	s[1][6]=1;
	s[1][7]=1;
	s[1][8]=1;
	s[1][9]=1;
	for(int i=2;i<=n;i++){
		for(int j=1;j<=9;j++){
			if(j<9) s[i][j]+=s[i-1][j+1];
			if(j>1) s[i][j]+=s[i-1][j-1]; 
			s[i][j]+=s[i-1][j];
			s[i][j]%=998244353;
		}
	}
	cout<<(s[n][1]+s[n][2]+s[n][3]+s[n][4]+s[n][5]+s[n][6]+s[n][7]+s[n][8]+s[n][9])%998244353;
    return 0;
}
