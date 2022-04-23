#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
    int a,b,c,d,e,f,x;
    cin>>a>>b>>c>>d>>e>>f>>x;
    int n=x/(a+c);
    int m=x/(d+f);
    int p=x%(a+c);
    int q=x%(d+f);
    n*=a,m*=d;
    n*=b,m*=e;
    if(p>=a) p=a;
    if(q>=d) q=d;
    p*=b,q*=e;
    n+=p;
    m+=q;
    if(n>m) cout<<"Takahashi";
    if(n<m) cout<<"Aoki";
    if(n==m) cout<<"Draw";
	return 0;
}
