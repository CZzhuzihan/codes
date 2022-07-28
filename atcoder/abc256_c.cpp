#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int h1,h2,h3,w1,w2,w3;
    cin>>h1>>h2>>h3>>w1>>w2>>w3;
    int s=0;
    for(int i=1;i<=30;i++){
        for(int j=1;j<=30;j++){
            //if(i+j>=h1) break;
            for(int k=1;k<=30;k++){
                //if(i+k>=w1) break;
                for(int l=1;l<=30;l++){
                    //if(j+l>=w2) break;
                    //if(k+l>=h2) break;
                    int a1=h1-i-j;
                    int a2=h2-k-l;
                    int a3=w1-i-k;
                    int a4=w2-j-l;
                    if(w3-a1-a2==h3-a3-a4&&a1>0&&a2>0&&a3>0&&a4>0&&h3-a3-a4>0){
                        s++;
                    }
                }
            }
        }
    }
    cout<<s;
    return 0;
}