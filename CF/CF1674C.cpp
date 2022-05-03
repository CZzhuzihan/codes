#include<bits/stdc++.h>
using namespace std;
long long p(long long x,long long y){
    long long s=1;
    for(int i=0;i<y;i++){
        s=s*x;
    }
    return s;
}
void solve(){
    string a,b;
    cin>>a>>b;
    int z=0;
    for(int i=0;i<b.size();i++){
        if(b[i]=='a'&&b.size()>1){
            z=1;
            break;
        }
    }
    if(z) cout<<"-1"<<endl;
    else if(b=="a") cout<<1<<endl;
    else{
        long long c=a.size();
        cout<<p(2,c)<<endl;
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int T=1;
    cin>>T;
    while(T--) solve();
    return 0;
}
