#include<bits/stdc++.h>
using namespace std;
char a[3],b[3];
int c[3],d[3];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>a[0]>>a[1]>>a[2]>>b[0]>>b[1]>>b[2];	
	for(int i=0;i<3;i++){
		if(a[i]=='R') c[i]=1;
		if(a[i]=='G') c[i]=2;
		if(a[i]=='B') c[i]=3;
	}
	for(int i=0;i<3;i++){
		if(b[i]=='R') d[i]=1;
		if(b[i]=='G') d[i]=2;
		if(b[i]=='B') d[i]=3;
	}
	int s1=0;
	for(int i=0;i<3;i++){
		for(int j=i+1;j<3;j++){
			if(c[j]>c[i]) s1++;
		}
	}
	int s2=0;
	for(int i=0;i<3;i++){
		for(int j=i+1;j<3;j++){
			if(d[j]>d[i]) s2++;
		}
	}
	if(abs(s2-s1)%2==0) cout<<"Yes";
	else cout<<"No";
    return 0;
}
