#include<bits/stdc++.h>
using namespace std;
int dx[]={1,0,-1,0};
int dy[]={0,-1,0,1};
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,x=0,y=0,f=0;
	cin>>n;
	string a;
	cin>>a;
	for(int i=0;i<a.size();i++){
		if(a[i]=='R'){
			f=(f+1)%4; 
		}
		else{
			x=x+dx[f];
			y=y+dy[f];
		}
	}
	cout<<x<<' '<<y;
    return 0;
}
