#include<bits/stdc++.h>
using namespace std;
char a[110][110];
queue<pair<int,int>> q;
int d[110][110];
int dx[4]={1,-1,0,0};
int dy[4]={0,0,-1,1};
int n,m;
bool ok(int x,int y){
	return x>=0&&x<n&&y>=0&&y<m;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int sx=-1,sy=-1,ex,ey;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
			if(a[i][j]=='o'){
				if(sx==-1&&sy==-1){
					sx=i;
					sy=j;
				}
				else{
					ex=i;
					ey=j;
				}
			}
		}
	}
	memset(d,-1,sizeof d);
	q.push(make_pair(sx,sy));
	d[sx][sy]=0;
	while(q.size()){
		pair<int,int> u=q.front();
		q.pop();
		for(int i=0;i<4;i++){
			int nx=u.first+dx[i];
			int ny=u.second+dy[i];
			if(ok(nx,ny)){
				if(d[nx][ny]==-1||d[u.first][u.second]+1<d[nx][ny]){
					d[nx][ny]=d[u.first][u.second]+1;
					q.push(make_pair(nx,ny)); 
				} 
			}
		} 
	} 
	cout<<d[ex][ey];
	return 0;
}