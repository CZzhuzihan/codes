#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b;
    cin>>n>>a>>b;
    for(int i=0;i<n*a;i++){
        for(int j=0;j<n*b;j++){
            if((i/a+j/b)%2==0) cout<<'.';
            else cout<<'#';
        }
        cout<<endl;
    }
    return 0;
}
