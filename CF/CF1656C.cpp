#include<bits/stdc++.h>
using namespace std;
int a[100010];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin>>T;
	while(T--){
		int n;
		cin>>n;
		int f=0,g=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]==1) g=1;
		}
		sort(a,a+n);
		for(int i=1;i<n;i++){
			if(a[i]-a[i-1]==1) f=1; 
		}
		cout<<(g&f?"NO":"YES")<<endl;
	} 
    return 0;
}
