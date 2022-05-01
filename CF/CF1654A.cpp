#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin>>T;
	while(T--){
		int n;
		cin>>n;
		long long a[1010];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n,greater<int>());
		cout<<a[0]+a[1]<<endl;
	} 
    return 0;
}
