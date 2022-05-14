#include<bits/stdc++.h>
using namespace std;
int a[310];
int h[3000010];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n,w;
    cin>>n>>w;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        h[a[i]]=1;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            h[a[i]+a[j]]=1;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                h[a[i]+a[j]+a[k]]=1;
            }
        }
    }
    int z=0;
    for(int i=0;i<=w;i++){
        if(h[i]==1) z++;
    }
    cout<<z;
    return 0;
}
