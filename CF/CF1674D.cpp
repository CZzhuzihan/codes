#include<bits/stdc++.h>
using namespace std;
int a[200010];
void solve(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=n-1;i>0;i-=2){
        if(a[i]<a[i-1]) swap(a[i],a[i-1]);
    }
    cout<<(is_sorted(a,a+n)?"YES":"NO")<<endl;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int T=1;
    cin>>T;
    while(T--) solve();
    return 0;
}
