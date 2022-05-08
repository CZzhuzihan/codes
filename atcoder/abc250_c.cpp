#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int a[200010];
int b[200010];
int main(){
    int n,q;
    cin>>n>>q;
    for(int i=1;i<=n;i++){
        a[i]=i;
        b[i]=i;
    }
    for(int i=0;i<q;i++){
        int x;
        cin>>x;
        if(a[x]==n){
            swap(b[a[x]-1],b[a[x]]);
            swap(a[b[a[x]-1]],a[b[a[x]]]);
        }
        else{
            swap(b[a[x]+1],b[a[x]]);
            swap(a[b[a[x]+1]],a[b[a[x]]]);
        }
    }
    for(int i=1;i<=n;i++){
        cout<<b[i]<<' ';
    }
    return 0;
}
