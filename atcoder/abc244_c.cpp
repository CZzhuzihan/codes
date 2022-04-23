#include<bits/stdc++.h>
using namespace std;
bool b[10010];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,x;
	cin>>n;
	for(int i=1;i<=2*n+1;i++){
		b[i]=1;
	}
	x=2*n+2;
	while(1){
		if(x==0) break;
		b[x]=0;
		int y;
		for(int i=1;i<=2*n+1;i++){
			if(b[i]){
				y=i;
				b[y]=0;
				break;
			}
		}
		cout<<y<<endl;
		fflush(stdout);
		cin>>x;
	}
    return 0;
}
