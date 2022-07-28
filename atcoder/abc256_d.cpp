#include<bits/stdc++.h>
using namespace std;
pair<int,int> a[200010];
vector<pair<int,int> > z;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(z.size()!=0&&a[i].second<z[z.size()-1].second) continue;
        if(z.size()==0||a[i].first>z[z.size()-1].second){
            z.push_back(a[i]);
        }
        else{
            pair<int,int> x=z[z.size()-1];
            z.pop_back();
            z.push_back(make_pair(x.first,a[i].second));
        }
    }
    for(int i=0;i<z.size();i++){
        cout<<z[i].first<<' '<<z[i].second<<endl;
    }
    return 0;
}