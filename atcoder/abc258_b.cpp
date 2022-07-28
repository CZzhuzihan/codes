#include<bits/stdc++.h>
using namespace std;
char a[15][15];
int dx[]={0,0,1,-1,1,1,-1,-1};
int dy[]={1,-1,0,0,-1,1,1,-1};
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	long long mx=0;
	string z;
	for(int x=0;x<8;x++){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				long long s=(a[i][j]-'0');
				string y;
				y+=a[i][j];
				int nx=i;
				int ny=j;
				for(int k=1;k<n;k++){
					nx=nx+dx[x];
					ny=ny+dy[x];
					if(nx==-1) nx=n-1;
					if(nx==n) nx=0;
					if(ny==-1) ny=n-1;
					if(ny==n) ny=0;
					y=y+a[nx][ny];
					s=s*10+(a[nx][ny]-'0');
				}
				if(s>mx){
					mx=s;
					z=y;
				}
			}
		}
	}
	cout<<z;
	return 0;
}