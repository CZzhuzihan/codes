#include<bits/stdc++.h>
using namespace std;
priority_queue<int> q;
int n,x;
long long z;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		q.push(-x);
		q.push(-x);
        z+=x+q.top();
		q.pop();
	}
	cout<<z;
	return 0;
}
