#include<bits/stdc++.h>
using namespace std;
int dx[]={1,2,-1,-2,1,2,-1,-2};
int dy[]={2,1,2,1,-2,-1,-2,-1};
bool f;
int main(){
	int x1,x2,y1,y2,x,y;
	cin>>x1>>y1>>x2>>y2;
	x=abs(x1-x2);
	y=abs(y1-y2);
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			if(dx[i]+dx[j]==x&&dy[i]+dy[j]==y){
				f=1;
				break;
			}
		}
	}
	if(f) cout<<"Yes";
	else cout<<"No";
    return 0;
}
