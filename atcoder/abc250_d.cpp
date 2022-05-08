#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll b[1000010];
ll a[1000010];
ll z=0;
int main(){
    long long n,x=1;
    cin>>n;
    for(ll i=1;i<=1000000;i++){
		a[i]=i;
	}
	for(ll i=2;i<=1000000;i++){
		if(a[i]!=0){
			for(ll j=2;j<=1000000;j++){
                if(j*a[i]>1000000) break;
				a[a[i]*j]=0;
			}
		}
	}
    a[1]=0;
    for(ll i=1;i<=1000000;i++){
        b[i]=b[i-1]+(a[i]!=0);
    }
    for(ll i=1;i<=n;i++){
        if(i*i*i>n) break;
        if(a[i]==0) continue;
        ll j=n/i/i/i;
        if(j>=i) j=i-1;
        z+=b[j];
    }
    cout<<z;
    return 0;
}
