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
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		cout<<min_element(a,a+n)-a+1<<' '<<max_element(a,a+n)-a+1<<endl;
	} 
    return 0;
}
