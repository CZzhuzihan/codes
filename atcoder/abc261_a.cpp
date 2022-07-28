#include<bits/stdc++.h>
using namespace std;
int main(){
	int l1,r1,l2,r2;
	cin>>l1>>r1>>l2>>r2;
	int s=0;
	for(int i=0;i<=100;i++){
		if(i>l1&&i<=r1&&i>l2&&i<=r2) s++;
	}
	cout<<s;
	return 0;
}