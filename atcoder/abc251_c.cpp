#include<bits/stdc++.h>
using namespace std;
map<string,bool> m; 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n,ans=0,z=0;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        int t;
        cin>>s>>t;
        if(m[s]==1) continue;
        m[s]=1;
        if(t>ans){
            ans=t;
            z=i;
        }
    }
    cout<<z+1;
    return 0;
}
