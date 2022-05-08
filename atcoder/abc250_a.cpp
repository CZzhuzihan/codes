#include<bits/stdc++.h>
using namespace std;
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
int main(){
    int h,w,r,c,s=0;
    cin>>h>>w>>r>>c;
    for(int i=0;i<4;i++){
        int nx=r+dx[i];
        int ny=c+dy[i];
        if(nx>0&&nx<=h&&ny>0&&ny<=w) s++;
    }
    cout<<s;
    return 0;
}
