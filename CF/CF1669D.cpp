#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        string s;
        cin>>n>>s;
        int f=1,r=0,b=0;
        for(int i=0;i<=n;i++){
            if(i==n||s[i]=='W'){
                if(r>0&&b==0||r==0&&b>0){
                    f=0;
                }
                r=0;
                b=0;
            }
            else if(s[i]=='R') r++;
            if(s[i]=='B') b++;
        }
        cout<<(f?"YES":"NO")<<endl;
    }
}
