#include<bits/stdc++.h>
using namespace std;
char c[2010],d[2010];
int a[2010];
int b[2010];
int z[2000010];
int main(){
	cin>>c>>d;
	int la=strlen(c);
	int lb=strlen(d);
	reverse(c,c+la);
	reverse(d,d+lb);
	for(int i=0;i<la;i++){
		a[i]=c[i]-'0';
	}
	for(int i=0;i<lb;i++){
		b[i]=d[i]-'0';
	}
	int lc=la+lb;
	for(int i=0;i<la;i++){
		for(int j=0;j<lb;j++){
			z[i+j]+=a[i]*b[j];
		}
	}
	for(int i=0;i<lc;i++){
		z[i+1]+=(z[i]/10);
		z[i]%=10;
	}
	while(lc>1&&z[lc-1]==0){
		lc--;
	}
	for(int i=lc-1;i>=0;i--){
		cout<<z[i];
	}
	return 0;
}