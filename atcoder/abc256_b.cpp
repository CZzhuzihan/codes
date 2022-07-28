#include<bits/stdc++.h>
using namespace std;
int a[110];
vector<int> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        v.push_back(0);
        for(int j=0;j<v.size();j++){
            v[j]+=a[i];
        }
    }
    int s=0;
    for(int i=0;i<v.size();i++){
        if(v[i]>=4) s++;
    }
    cout<<s;
    return 0;
}