#include<bits/stdc++.h>
using namespace std;
void solve(){
    int x,y;
    cin>>x>>y;
    if(y%x!=0){
        cout<<0<<' '<<0<<endl;
    }
    else{
        cout<<1<<' '<<y/x<<endl;
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
