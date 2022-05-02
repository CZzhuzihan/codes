# [openjudge](http://noi.openjudge.cn/)
## [2.1基本算法之枚举](http://noi.openjudge.cn/ch0201/)
### [1749:数字方格](http://noi.openjudge.cn/ch0201/1749/)
```cpp
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,ans=0;
	cin>>n;
	for(int i=0;i<=n;i++){
		for(int j=0;j<=n;j++){
			for(int k=0;k<=n;k++){
				if((i+j)%2==0&&(j+k)%3==0&&(i+j+k)%5==0){
					ans=max(ans,i+j+k);
				}
			}
		}
	}
	cout<<ans;
    return 0;
}
```
### [1752:鸡兔同笼](http://noi.openjudge.cn/ch0201/1752/)
```cpp
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a;
	cin>>a;
	if(a%2==1){
		cout<<0<<' '<<0;
		return 0;
	}
	int mi=1e9,ma=0;
	for(int i=0;i<=a/2;i++){
		int b=a-2*i;
		if(b%4!=0) continue;
		ma=max(ma,i+b/4);
		mi=min(mi,i+b/4);
	}
	cout<<mi<<' '<<ma;
    return 0;
}
```
### [1809:两倍](http://noi.openjudge.cn/ch0201/1809/)
```cpp
#include<bits/stdc++.h>
using namespace std;
int a[110],l=0,ans=0;
int main(){
	cin>>a[0];
	for(l=1;a[l-1]!=0;l++){
		cin>>a[l];
	}
	l--;
	for(int i=0;i<l;i++){
		for(int j=0;j<l;j++){
			if(2*a[i]==a[j]) ans++;
		}
	}
	cout<<ans;
    return 0;
}
```
### [1812:完美立方](http://noi.openjudge.cn/ch0201/1812/)
```cpp
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll pw(ll n,ll m){
	ll re=1;
	for(;m>0;m/=2){
		if(m%2==1){
			re=re*n;
		}
		n=n*n;
	}
	return re;
}
vector<pair<ll,pair<ll,pair<ll,ll> >> > v;
int main(){
	int n;
	cin>>n;
	for(ll a=2;a<=n;a++){
		for(ll b=a;b<=n;b++){
			for(ll c=b;c<=n;c++){
				for(ll d=c;d<=n;d++){
					if(pw(a,3)+pw(b,3)+pw(c,3)==pw(d,3)){
						v.push_back(make_pair(d,make_pair(a,make_pair(b,c))));
					}
				}
			}
		}
	}
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++){
		cout<<"Cube = "<<v[i].first<<", Triple = ("<<v[i].second.first<<","<<v[i].second.second.first<<","<<v[i].second.second.second<<")"<<endl;
	}
    return 0;
}
```
### [1813:熄灯问题](http://noi.openjudge.cn/ch0201/1813/)
```cpp
#include<bits/stdc++.h>
using namespace std;
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
int a[10][10];
bool b[10][10];
bool ans[10][10];
bool ok(int x,int y){
	return x>=0&&x<5&&y>=0&&y<6;
}
void _(int x,int y){
	for(int i=0;i<4;i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(ok(nx,ny)){
			b[nx][ny]=!b[nx][ny];
		}
	}
	b[x][y]=!b[x][y];
}
bool check(){
	for(int i=1;i<5;i++){
		for(int j=0;j<6;j++){
			if(b[i-1][j]){
				_(i,j);
				ans[i][j]=1;
			}
		}
	}
	bool re=0;
	for(int j=0;j<6;j++){
		if(b[4][j]) re=1;
	}
	return !re;
}
int main(){
	for(int i=0;i<5;i++){
		for(int j=0;j<6;j++){
			cin>>a[i][j];
			b[i][j]=a[i][j];
		}
	}
	for(int i=0;i<1<<6;i++){
		for(int j=0;j<6;j++){
			if(i>>j&1){
				ans[0][5-j]=1;
				_(0,5-j);
			}
		}
		if(check()){
			for(int k=0;k<5;k++){
				for(int l=0;l<6;l++){
					cout<<ans[k][l]<<' ';
				}
				cout<<endl;
			}
			return 0;
		}
		for(int k=0;k<5;k++){
			for(int l=0;l<6;l++){
				b[k][l]=a[k][l];
				ans[k][l]=0;
			}
		}
	}
    return 0;
}
```
## [2.2基本算法之递归和自调用函数](http://noi.openjudge.cn/ch0202/)
### [1696:波兰表达式](http://noi.openjudge.cn/ch0202/1696/)
```cpp
#include<bits/stdc++.h>
using namespace std;
vector<string> v;
stack<double> b;
int main(){
	string s,a;
	getline(cin,s);
	for(int i=0;i<s.size();i++){
		if(s[i]==' '){
			v.push_back(a);
			a="";
		}
		else{
			a=a+s[i];
		}
	}
	v.push_back(a);
	for(int i=v.size()-1;i>=0;i--){
		if(isdigit(v[i][0])){
			b.push(stod(v[i]));
		}
		else{
			double x=b.top();b.pop();
			double y=b.top();b.pop();
			double z;
			if(v[i]=="+") z=x+y;
			if(v[i]=="-") z=x-y;
			if(v[i]=="*") z=x*y;
			if(v[i]=="/") z=x/y;
			b.push(z);
		}
	}
	cout<<fixed<<setprecision(6)<<b.top();
    return 0;
}
```
### [1750:全排列](http://noi.openjudge.cn/ch0202/1750/)
```cpp
#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	cin>>a;
	do{
		cout<<a<<endl;
	}while(next_permutation(a.begin(),a.end()));
    return 0;
}
```
### [1751:分解因数](http://noi.openjudge.cn/ch0202/1751/)
```cpp
#include<bits/stdc++.h>
using namespace std;
int work(int x,int y){
	if(x==1) return 1;
	if(y==1) return 0;
	if(x%y!=0) return work(x,y-1);
	return work(x/y,y)+work(x,y-1);
}
void solve(){
	int n;
	cin>>n;
	cout<<work(n,n)<<endl;
}
int main(){
	int T;
	cin>>T;
	while(T--) solve();
    return 0;
}
```
## [2.3基本算法之递归变递推](http://noi.openjudge.cn/ch0203/)
### [1760:菲波那契数列(2)](http://noi.openjudge.cn/ch0203/1760/)
```cpp
#include<bits/stdc++.h>
using namespace std;
int a[1000010];
int main(){
	a[1]=1;
	a[2]=1;
	for(int i=3;i<=1e6;i++){
		a[i]=(a[i-1]+a[i-2])%1000;
	}
	int T;
	scanf("%d",&T);
	while(T--){
		int x;
		scanf("%d",&x);
		printf("%d\n",a[x]);
	}
    return 0;
}
```
### [1788:Pell数列](http://noi.openjudge.cn/ch0203/1788/)
```cpp
#include<bits/stdc++.h>
using namespace std;
int a[1000010];
int main(){
	a[1]=1;
	a[2]=2;
	for(int i=3;i<=1e6;i++){
		a[i]=(2*a[i-1]+a[i-2])%32767;
	}
	int T;
	scanf("%d",&T);
	while(T--){
		int x;
		scanf("%d",&x);
		printf("%d\n",a[x]);
	}
    return 0;
}
```
### [3525:上台阶](http://noi.openjudge.cn/ch0203/3525/)
```cpp
#include<bits/stdc++.h>
using namespace std;
int a[110];
int main(){
	a[1]=1;
	a[2]=2;
	a[3]=4;
	for(int i=4;i<=101;i++){
		a[i]=(a[i-1]+a[i-2]+a[i-3]);
	}
	int x;
	scanf("%d",&x);
	while(x!=0){
		printf("%d\n",a[x]);
		scanf("%d",&x);
	}
    return 0;
}
```
## [2.4基本算法之分治](http://noi.openjudge.cn/ch0204/)
### [7617:输出前k大的数](http://noi.openjudge.cn/ch0204/7617/)
```cpp
#include<bits/stdc++.h>
using namespace std;
int a[100010];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n,greater<int>());
	int k;
	cin>>k;
	for(int i=0;i<k;i++){
		cout<<a[i]<<endl;
	}
    return 0;
}
```
### [7620:区间合并](http://noi.openjudge.cn/ch0204/7620/)
```cpp
#include<bits/stdc++.h>
using namespace std;
pair<int,int> a[50010];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i].first>>a[i].second;
	}
	sort(a,a+n);
	bool ok=1;
	int mr=a[0].second;
	for(int i=1;i<n;i++){
		if(a[i].first>mr){
			ok=0;
			break;
		}
		mr=max(mr,a[i].second);
	}
	if(ok) cout<<a[0].first<<' '<<mr;
	else cout<<"no";
    return 0;
}
```
### [7622:求排列的逆序数](http://noi.openjudge.cn/ch0204/7622/)
```cpp
#include<bits/stdc++.h>
using namespace std;
int a[100010];
int b[100010];
long long ans=0;
void merge(int l,int m,int r){
	int i=l,j=m,ind=l;
	while(i<m&&j<r){
		if(a[i]<=a[j]) b[ind++]=a[i++];
		else{
			b[ind++]=a[j++];
			ans+=m-i;
		}
	}
	while(i<m) b[ind++]=a[i++];
	while(j<r) b[ind++]=a[j++];
	for(int k=l;k<r;k++){
		a[k]=b[k];
	}
}
void merge_sort(int l,int r){
	if(l<r-1){
		int m=(l+r)/2;
		merge_sort(l,m);
		merge_sort(m,r);
		merge(l,m,r);
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	merge_sort(0,n);
	cout<<ans;
	return 0;
}
```
## [2.5基本算法之搜索](http://noi.openjudge.cn/ch0205/)
### [1253:Dungeon Master](http://noi.openjudge.cn/ch0205/1253/)
```cpp
#include<bits/stdc++.h>
using namespace std;
int l,n,m,sx,sy,sz,ex,ey,ez;
char a[40][40][40];
int d[40][40][40];
int dx[]={0,-1,0,0,1,0};
int dy[]={0,0,-1,1,0,0};
int dz[]={-1,0,0,0,0,1};
bool ok(int x,int y,int z){
	return x>=0&&y>=0&&z>=0&&x<l&&y<n&&z<m;
}
struct node{
	int x,y,z;
};
queue<node> q;
void solve(){
	for(int i=0;i<l;i++){
		for(int j=0;j<n;j++){
			for(int k=0;k<m;k++){
				cin>>a[i][j][k];
				if(a[i][j][k]=='S'){
					sx=i;
					sy=j;
					sz=k;
				}
				if(a[i][j][k]=='E'){
					ex=i;
					ey=j;
					ez=k;
				}
			}
		}
	}
	memset(d,0x3f,sizeof d);
	q.push({sx,sy,sz});
	d[sx][sy][sz]=0;
	while(q.size()){
		node u=q.front();
		q.pop();
		if(u.x==ex&&u.y==ey&&u.z==ez){
			cout<<"Escaped in "<<d[ex][ey][ez]<<" minute(s)."<<endl;
			return;
		}
		for(int i=0;i<6;i++){
			int nx=u.x+dx[i];
			int ny=u.y+dy[i];
			int nz=u.z+dz[i];
			if(ok(nx,ny,nz)){
				if(a[nx][ny][nz]!='#'){
					if(d[nx][ny][nz]>d[u.x][u.y][u.z]+1){
						d[nx][ny][nz]=d[u.x][u.y][u.z]+1;
						q.push({nx,ny,nz});
					}
				}
			}
		}
	}
    cout<<"Trapped!"<<endl;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>l>>n>>m;
	while(!(l==0&&n==0&&m==0)){
		solve();
		cin>>l>>n>>m;
	}
}
```
### [131:Channel Allocation](http://noi.openjudge.cn/ch0205/131/)
```cpp
#include<bits/stdc++.h>
using namespace std;
int b[50][50];
int c[50];
int h[50];
int z=0;
bool ok(int x,int y){
    for(int i=1;i<x;i++){
        if(b[i][x]){
            if(c[i]==y){
                return false;
            }
        }
    }
    return true;
}
void solve(int n,int x){
    if(x==n+1){
    	int ans=0;
    	for(int i=1;i<=4;i++){
    		ans+=h[i];
		}
    	z=min(z,ans);
        return;
    }
    for(int i=1;i<=4;i++){
        if(ok(x,i)){
            c[x]=i;
            h[i]=1;
            solve(n,x+1);
        }
    }
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	while(n!=0){
		string a;
		for(int i=0;i<=30;i++){
			for(int j=0;j<=30;j++){
				b[i][j]=0;
			}
			h[i]=0;
			c[i]=0;
		}
		for(int i=0;i<n;i++){
			cin>>a;
			for(int j=2;j<a.size();j++){
				b[a[0]-'A'+1][a[j]-'A'+1]=1;
				b[a[j]-'A'+1][a[0]-'A'+1]=1;
			}
		}
		z=4;
		solve(n,1);
		cout<<z<<" channel";
		if(z!=1) cout<<"s";
		cout<<" needed."<<endl;
		cin>>n;
	}
    return 0;
}
```
### [1388:Lake Counting](http://noi.openjudge.cn/ch0205/1388/)
``` cpp
#include<bits/stdc++.h>
using namespace std;
char a[1010][1010];
int d[1010][1010];
int dx[8]={-1,-1,-1,0,0,1,1,1};
int dy[8]={-1,0,1,-1,1,-1,0,1};
int n,m;
queue<pair<int,int>> q;
bool in(int x,int y){
    return x>=0&&x<n&&y>=0&y<m;
}
void bfs(int x,int y){
    q.push(make_pair(x,y));
    d[x][y]=1;
    pair<int,int> u;
    while(q.size()){
        u=q.front();
        q.pop();
        for(int i=0;i<8;i++){
            int nx=u.first+dx[i];
            int ny=u.second+dy[i];
            if(a[nx][ny]=='W'&&d[nx][ny]==-1){
                d[nx][ny]=1;
                q.push(make_pair(nx,ny));
            }
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    memset(d,-1,sizeof d);
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]=='W'&&d[i][j]==-1){
                bfs(i,j);
                ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}
```
### [1490:A Knight's Journey](http://noi.openjudge.cn/ch0205/1490/)
``` cpp
#include<bits/stdc++.h>
using namespace std;
int a[50][50];
int n,m;
int dx[]={-1,1,-2,2,-2,2,-1,1};
int dy[]={-2,-2,-1,-1,1,1,2,2};
int ans;
bool ok(int x,int y){
    return x>=0&&x<n&&y>=0&&y<m;
}
vector<pair<int,int>> v,z;
void dfs(int x,int y,int w){
	if(ans) return;
    if(w>=n*m){
        ans=1;
        z=v;
        return;
    }
    for(int i=0;i<8;i++){
        if(ok(x+dx[i],y+dy[i])){
            if(!a[x+dx[i]][y+dy[i]]){
                a[x+dx[i]][y+dy[i]]=1;
                v.push_back(make_pair(x+dx[i],y+dy[i]));
                dfs(x+dx[i],y+dy[i],w+1);
                v.pop_back();
                a[x+dx[i]][y+dy[i]]=0;
            }
        }
    }
}
void solve(int x){
	cin>>n>>m;
	cout<<"Scenario #"<<x<<":"<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			memset(a,0,sizeof a);
			a[i][j]=1;
			ans=0;
			v.clear();
			z.clear();
			v.push_back(make_pair(i,j));
			dfs(i,j,1);
			if(ans){
				for(int k=0;k<z.size();k++){
					cout<<char('A'+z[k].second)<<z[k].first+1;
				}
				cout<<endl;
				return;
			}
		}
	}
	cout<<"impossible"<<endl;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T,x=0;
	cin>>T;
	while(T--){
		solve(++x);
		if(T!=0) cout<<endl;
	}
    return 0;
}
```
### [156:LETTERS](http://noi.openjudge.cn/ch0205/156/)
```cpp
#include<bits/stdc++.h>
using namespace std;
int n,m;
map<int,char> g,k;
string s[1010];
int ans=0;
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
bool ok(int x,int y){
    return x>=0&&x<n&&y>=0&&y<m;
}
void dfs(int x,int y){
    int z=0;
    k=g;
    for(int i=0;i<n;i++){
    	for(int j=0;j<m;j++){
    		z+=(k[s[i][j]]);
    		k[s[i][j]]=0;
		}
	}
    ans=max(ans,z);
    for(int i=0;i<4;i++){
        int nx=x+dx[i];
        int ny=y+dy[i];
        if(ok(nx,ny)){
            if(!g[s[nx][ny]]){
                g[s[nx][ny]]=1;
                dfs(nx,ny);
                g[s[nx][ny]]=0;
            }
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>s[i];
        for(int j=0;j<m;j++){
            g[s[i][j]]=0;
        }
    }
    g[s[0][0]]=1;
    dfs(0,0);
    cout<<ans;
    return 0;
}
```
### [1789:算24](http://noi.openjudge.cn/ch0205/1789/)
#### 题目大意
输入多组数据，每组数据包含四个数，对这四个数使用`+`，`-`，`*`，`/`和`()`，如果答案可以为`24`，输出`YES`，否则输出`NO`。
#### 题目思路
每次`dfs`找两个数，把他们进行运算，最后看结果是否等于`24`。
#### AC代码
```cpp
#include<bits/stdc++.h>
using namespace std;
double a[10];
bool b[20];
int z=0;
bool check(){
	for(int i=0;i<4;i++){
		if(a[i]!=0) return false;
	}
	return true;
}
void dfs(int x,double s){
    if(z) return;
	if(x==3){
        if(abs(s-24)<=0.000001){
            z=1;
        }
        return;
    }
    for(int i=0;i<4;i++){
        if(b[i]) continue;
        b[i]=1;
        for(int j=0;j<4;j++){
            if(b[j]) continue;
            b[j]=1;
            double y=a[j];
            for(int k=0;k<4;k++){
                double s;
                if(k==0) s=a[i]+a[j];
                if(k==1) s=a[i]-a[j];
                if(k==2) s=a[i]*a[j];
                if(k==3) s=a[i]/a[j];
                a[j]=s;
                b[j]=0;
                dfs(x+1,s);
                a[j]=y;
            }
            b[j]=0;
        }
        b[i]=0;
    }
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	while(1){
		for(int i=0;i<4;i++){
			cin>>a[i];
            b[i]=0;
		}
		if(check()) break;
		z=0;
		dfs(0,0);
		cout<<(z==1?"YES":"NO")<<endl;
    }
    return 0;
}
```
### [1805:碎纸机](http://noi.openjudge.cn/ch0205/1805/)
#### 题目大意
输入多组数据，每组数据包含两个数`x`，`y`，要求把`y`进行切割，使得切割后的数相加不大于`x`，输出有三种情况
1. 无解，输出`error`
2. 最大值有多组解，输出`rejected`
3. 最大值有唯一解，输出最大值和方案。
#### 题目思路
枚举每一个间隔是否切割，最后计算答案。
#### AC代码
```cpp
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
```
