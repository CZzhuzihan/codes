#include<bits/stdc++.h>
using namespace std;
string c,d;
int a[10100];
int b[10100];
int z[10100];
bool cmp(string x,string y){
	if(x.size()!=y.size()) return x.size()<y.size();
	else return x<y;
}
int main(){
	cin>>c>>d;
	if(cmp(c,d)){
		swap(c,d);
		cout<<"-";
	}
	for(int i=0;i<c.size();i++){
		a[i]=c[c.size()-i-1]-'0';
	}
	for(int i=0;i<d.size();i++){
		b[i]=d[d.size()-i-1]-'0';
	}
	for(int i=0;i<c.size();i++){
		z[i]=a[i]-b[i];
	}
	for(int i=0;i<c.size();i++){
		while(z[i]<0){
			z[i]+=10;
			z[i+1]--;
		}
	}
	int l=c.size();
	while(l>0&&z[l]==0){
		l--;
	}
	for(int i=l;i>=0;i--){
		cout<<z[i];
	}
	return 0;
}