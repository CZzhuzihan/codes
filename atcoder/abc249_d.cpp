#include<bits/stdc++.h>
using namespace std;
long long g[200010];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
    int n,s;
    cin>>n;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        s=max(s,x);
        g[x]++;
    }
    long long z=0;
    for(int ai=1;ai<=s;ai++){
        if(g[ai]==0) continue;
        for(int aj=1;ai*aj<=s;aj++){
            if(g[aj]==0) continue;
            if(g[ai*aj]>0) z+=g[ai]*g[aj]*g[ai*aj];
        }
    }
    cout<<z;
	return 0;
}
