#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<vector>
#include<map>
#include<list>
#include<cmath>
#include<set>
#include<queue>
using namespace std;
const int maxn = 200000+3;
vector<int>pile(maxn);
vector<int>ans(maxn);
int main(){
	int a,b,n,k,q;
	cin >> n >> k >> q;
	for(int i=0;i<n;i++){
		cin >> a >> b;
		pile[a]++;
		pile[b+1]--;
	}
	int cur=0;
	for(int i=1;i<maxn;i++){
		cur+=pile[i];
		pile[i]=cur;
		
		ans[i]=ans[i-1]+( pile[i]>=k );
	}
	for(int i=0;i<q;i++){
		cin >> a >> b;
		cout << ans[b]-ans[a-1] << endl;
	}
}