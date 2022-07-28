#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	long long a,b,c,s=0;
	cin>>a>>b>>c;
	s+=(a*(a+1)/2);
	if(b==1||c==1){
		cout<<0;
		return 0; 
	}
	if(b==2){
		s-=(a-a%2)/2*((a-a%2)/2+1);
		//else s-=(a-a%2)*(a-a%2+1)/2;
		for(int i=1;;i++){
			if(i*c>a) break;
			if((i*c)%b!=0) s-=i*c;
		}		
		cout<<s;
		return 0;
	}
	if(c==2){
		s-=(a-a%2)*(a-a%2+1)/2;
		for(int i=1;;i++){
			if(i*b>a) break;
			if((i*b)%c!=0) s-=i*b;
		}	
		cout<<s;
		return 0;
	}
	for(int i=1;;i++){
		if(i*b>a) break;
		s-=i*b;
	}
	for(int i=1;;i++){
		if(i*c>a) break;
		if((i*c)%b!=0) s-=i*c;
	}
	cout<<s;
	return 0;
}

