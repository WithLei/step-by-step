#include<cstdio>
#include<string>
#include<cstdlib>
#include<math>
#include<iostream>
#include<algorithm>
#include<sstream>
#include<map>
using namespace std;
typedef long long LL;
typedef map<int,int> mp;
struct {
	int u,v,w;
}man[10005];
int main(){
	int n,m,u,v,w;
	while(cin >> n >> m){
		memset(man,0,sizeof(man));
		map<int,mp> dj;
		map<int,int> frd;
		for(int i=0;i<m;i++){
			cin >> u >> v >> w;
			if(dj[u][v]==0)frd[u]++;
			dj[u][v]+=w;
			if(dj[v][u]!=0){
				dj[u][v]+=dj[v][u];
				dj[v][u]=0;
				}
		}
		map<int,mp>::iterator it = dj.begin();
		map<int,int>::iterator itt = it.second();
		int range = 0;
		for(;it!=dj.end();it++){
			for(;itt!=it.end();itt++){
				if(itt)
			}
		}
	}
	return 0;
}