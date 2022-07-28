#include<bits/stdc++.h>
using namespace std;
int a[8];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	int T;
	cin>>T;
	while(T--){
		int n;
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		sort(a+1,a+n+1);
		vector<int> v;
		for(int i=0;i<=n;i++){
			for(int j=0;j<i;j++){
				v.push_back(a[i]-a[j]); 
			} 
		}
		sort(v.begin(),v.end());
		v.resize(unique(v.begin(),v.end())-v.begin());
		int s=0;
		for(int i=0;i<v.size();i++){
			for(int j=i;j<v.size();j++){
				for(int k=j;k<v.size();k++){
					int x=v[i],y=v[j],z=v[k];
					multiset<int> b={x,y,z,x+y,x+z,y+z,x+y+z};
					int f=1;
					for(int l=1;l<=n;l++){
						if(!b.count(a[l])){
							f=0;
							break;
						}
						else b.erase(b.find(a[l]));
					}
<<<<<<< HEAD
					if(f/*&&x+y>z*/){
						//cout<<x<<' '<<y<<' '<<z<<endl;
=======
					if(f){
>>>>>>> d4cd5bbbc98eb6c29e5a7fdcfa75b0158e62dcb1
						s++;
					}
				}
			}
		}
		cout<<s<<endl;
	} 
    return 0;
}
<<<<<<< HEAD

=======
>>>>>>> d4cd5bbbc98eb6c29e5a7fdcfa75b0158e62dcb1
