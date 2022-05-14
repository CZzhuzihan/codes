#include<bits/stdc++.h>
using namespace std;
queue<pair<int,int> > q;
int dx[]={1,2,2,1,-1,-2,-2,-1};
int dy[]={2,1,-1,-2,2,1,-1,-2};
int n,m;
int d[410][410];
bool ok(int x,int y){
    return x>=0&&x<n&&y>=0&&y<m;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int x,y;
    cin>>n>>m>>x>>y;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            d[i][j]=-1;
        }
    }
    x--,y--;
    d[x][y]=0;
    q.push(make_pair(x,y));
    while(q.size()){
        pair<int,int> u=q.front();
        q.pop();
        for(int i=0;i<8;i++){
            int nx=u.first+dx[i];
            int ny=u.second+dy[i];
            if(ok(nx,ny)&&(d[nx][ny]==-1||d[u.first][u.second]+1<d[nx][ny])){
                d[nx][ny]=d[u.first][u.second]+1;
                q.push(make_pair(nx,ny));
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<left<<setw(5)<<d[i][j];
        }
        cout<<endl;
    }
    return 0;
}
