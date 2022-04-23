#include<bits/stdc++.h>
using namespace std;
bool _(int x){
	if(x==1) return false;
	for(int i=2;i<=sqrt(x);i++){
		if(x%i==0) return false;
	}
	return true;
}
int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	bool ans=0;
	for(int i=a;i<=b;i++){
		bool ok=0;
		for(int j=c;j<=d;j++){
			int x=i+j;
			if(_(x)) ok=1;
		}
		if(!ok) ans=1; 
	}
	if(ans) cout<<"Takahashi";
	else cout<<"Aoki";
    return 0;
}
