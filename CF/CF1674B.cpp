#include<bits/stdc++.h>
using namespace std;
void solve(){
    string a;
    cin>>a;
    int x=a[0]-'a';
    int y=a[1]-'a'-(a[1]>a[0]);
    cout<<x*25+y+1<<endl;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int T=1;
    cin>>T;
    while(T--) solve();
    return 0;
}
