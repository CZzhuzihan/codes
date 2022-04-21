#include<bits/stdc++.h>
using namespace std;
int x[310],y[310];
int main(){
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }
    if(k==1){
        cout<<"Infinity";
        return 0;
    }
    int z=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int s=0;
            for(int l=0;l<n;l++){
                if((x[j]-x[i])*(y[l]-y[i])-(y[j]-y[i])*(x[l]-x[i])==0){
                    if(l!=i&&l<j){
                        s=0;
                        break;
                    }
                    s++;
                }
            }
            if(s>=k) z++;
        }
    }
    cout<<z;
}
