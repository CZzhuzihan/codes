#include<bits/stdc++.h>
using namespace std;
vector<int> a[200010];
int v[200010];
void dfs(int x){
    v[x]=1;
    for(auto i:a[x]){
        if(!v[i]){
            cout<<x<<' '<<i<<endl;
            dfs(i);
        }
    }
}
void bfs(int x){
    memset(v,0,sizeof v);
    queue<int> q;
    q.push(x);
    v[x]=1;
    while(q.size()){
        int x=q.front();
        q.pop();
        for(auto i:a[x]){
            if(!v[i]){
                cout<<x<<' '<<i<<endl;
                q.push(i);
                v[i]=1;
            }
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    dfs(1);
    bfs(1);
    return 0;
}
