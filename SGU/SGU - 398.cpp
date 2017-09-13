#include<cstdio>
#include<cstring> 
#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<vector>
#include<queue>
#include<stack>
#include<list>
#include<cmath>
#include<set>
typedef long long LL;
using namespace std;

struct man{
	set<int>fid;
	
}m[55];

int main(){
	int n,x,a,b;
	int range[55];
	cin >> n >> x;
	for(int i=0;i<n;i++){
		cin >> a;
		for(int t=0;t<a;t++){
			cin >> b;
			m[i].fid.insert(b-1);
			m[b-1].fid.insert(i);
		}
	}
	int r = 0;
	int ff = 0;
	for(int fsf = 0;fsf < n;fsf++ ){
		if(m[x-1].fid.count(fsf) || fsf == x-1)continue;
		for(set<int>::iterator it = m[x-1].fid.begin();it != m[x-1].fid.end() ;++it ){
			int f = *it;
		if(m[f].fid.count(fsf)){
			range[r]=fsf+1;
			r++;
			break;
			}
		}
	}
	cout << r << endl;
	for(int i=0;i<r;i++)cout << range[i] << " ";
	if(r>0)cout << endl;
}