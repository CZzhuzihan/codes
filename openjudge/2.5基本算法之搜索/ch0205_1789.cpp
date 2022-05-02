#include<bits/stdc++.h>
using namespace std;
vector<int> a;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	while(1){
        int x,y;
        cin>>x>>y;
        if(x==0&&y==0) break;
        a.clear();
        while(y!=0){
            a.push_back(y%10);
            y=y/10;
        }
        reverse(a.begin(),a.end());
        int l=a.size()-1;
        int ans=-1;
        vector<vector<int>> z;
        for(int i=0;i<1<<l;i++){
	        int c=0;
            vector<int> v;
		    for(int j=0;j<l;j++){
                if(i>>j&1){
                    int b=0;
                    for(int k=c;k<=j;k++){
                    	b=b*10+a[k];
                    }
                    c=j+1;
                    v.push_back(b);
                }
            }
            int d=0;
            for(int k=c;k<a.size();k++){
                d=d*10+a[k];
            }
            v.push_back(d);
            int s=0;
            for(auto j:v){
                s=s+j;
            }
            if(s>x) continue;
            if(s>ans){
                ans=s;
                z.clear();
                z.push_back(v);
            }
            else if(s==ans){
                z.push_back(v);
            }
        }
        if(z.size()==0){
            cout<<"error";
        }
        else if(z.size()>1){
            cout<<"rejected";
        }
        else{
            cout<<ans;
            for(auto i:z[0]){
                cout<<' '<<i;
            }
        }
        cout<<endl;
	}
	return 0;
}
