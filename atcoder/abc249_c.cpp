#include<bits/stdc++.h>
using namespace std;
string a[20];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=0;
    for(int i=0;i<1<<n;i++){
        map<char,int> g;
        for(int j=0;j<n;j++){
            if(i>>j&1){
                for(int l=0;l<a[j].size();l++){
                    g[a[j][l]]++;
                }
            }
        }
        int z=0;
        for(int j=0;j<26;j++){
            if(g[char(j+'a')]==k) z++;
        }
        ans=max(ans,z);
    }
    cout<<ans;
	return 0;
}
