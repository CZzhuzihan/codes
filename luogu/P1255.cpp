#include<bits/stdc++.h>
using namespace std;
string c[5010];
int x[1100];
int y[1100];
int z[1100];
string solve(string &a,string &b){
	int la=a.size();
	int lb=b.size();
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	memset(x,0,sizeof x);
	memset(y,0,sizeof y);
	memset(z,0,sizeof z);
	for(int i=0;i<la;i++){
		x[i]=int(a[i]-'0');
	}
	for(int i=0;i<lb;i++){
		y[i]=int(b[i]-'0');
	}
	int lc=max(la,lb);
	for(int i=0;i<lc;i++) cout<<x[i];
	cout<<' ';
	for(int i=0;i<lc;i++) cout<<y[i];
	cout<<endl;
	for(int i=0;i<lc;i++){
		z[i]=x[i]+y[i];
	}
	for(int i=0;i<lc;i++){
		if(z[i]>=10){
			z[i+1]+=(z[i]/10);
			z[i]%=10;
		}
	}
	if(z[lc]>0) lc++;
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	string re;
	for(int i=lc-1;i>=0;i--){
		re=re+char(z[i]+'0');
	}
	return re;
}
int main(){
	int n;
	cin>>n;
	c[0]="1";
	c[1]="1";
	for(int i=2;i<=n;i++){
		c[i]=solve(c[i-2],c[i-1]);
		cout<<c[i]<<endl;
	}
	cout<<c[n];
}