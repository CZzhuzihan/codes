#include<bits/stdc++.h>
using namespace std;
double a[10];
bool b[20];
int z=0;
bool check(){
	for(int i=0;i<4;i++){
		if(a[i]!=0) return false;
	}
	return true;
}
void dfs(int x,double s){
    if(z) return;
	if(x==3){
        if(abs(s-24)<=0.000001){
            z=1;
        }
        return;
    }
    for(int i=0;i<4;i++){
        if(b[i]) continue;
        b[i]=1;
        for(int j=0;j<4;j++){
            if(b[j]) continue;
            b[j]=1;
            double y=a[j];
            for(int k=0;k<4;k++){
                double s;
                if(k==0) s=a[i]+a[j];
                if(k==1) s=a[i]-a[j];
                if(k==2) s=a[i]*a[j];
                if(k==3) s=a[i]/a[j];
                a[j]=s;
                b[j]=0;
                dfs(x+1,s);
                a[j]=y;
            }
            b[j]=0;
        }
        b[i]=0;
    }
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	while(1){
		for(int i=0;i<4;i++){
			cin>>a[i];
            b[i]=0;
		}
		if(check()) break;
		z=0;
		dfs(0,0);
		cout<<(z==1?"YES":"NO")<<endl;
	}
    return 0;
}
