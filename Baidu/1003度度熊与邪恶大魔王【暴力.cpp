#include<cstdio>
#include<string>
#include<cstdlib>
#include<iostream>
#include<algorithm>
#include<sstream>
#include<map>
#include<set>
#include<vector>
using namespace std;
struct dudu{
	int use,hurt;
	double jiazhi;
}attack[1008];

struct mowang{
	int a,b;
}monster[100008];

bool cmp(dudu a,dudu b){
	if(a.jiazhi!=b.jiazhi)return a.jiazhi > b.jiazhi
	else if(a.use!=b.use)return a.use < b.use;
	else return a.hurt > b.hurt;
}

int main(){
	int n,m;
	while(cin >> n >> m){
		int maxb = 0;
		for(int i=0;i<n;i++){
			cin >> monster[i].a >> monster[i].b;
			if(maxb<monster[i].b)maxb=monster[i].b;
		}
		int maxhurt = 0,u,w;
		for(int i=0;i<m;i++){
			cin >> attack[i].use >> attack[i].hurt;
			attack[i].jiazhi=attack[i].hurt/attack[i].use;
			if(maxhurt<attack[i].hurt)maxhurt=attack[i].hurt;
		}
		sort(attack,attack+m,cmp);
		long long range = 0;
		if(maxhurt>maxb)
			for(int i=0;i<n;i++){
				int r=1002;
				for(int t=0;t<m;t++){
					if(monster[i].b>=attack[t].hurt)continue;
					else{
						int cha = attack[t].hurt - monster[i].b;
						if((monster[i].a/cha)*cha<monster[i].a){
							if(((monster[i].a/cha)+1)*attack[t].use<r)r=((monster[i].a/cha)+1)*attack[t].use;
						}
						else if((monster[i].a/cha)*attack[t].use<r)r=(monster[i].a/cha)*attack[t].use;
					}
				}
				range+=r;
			}
		else cout << "-1" << endl;
		 
		cout << range << endl;
		/*
		map<int,int> uw;
		for(int i=0;i<m;i++){
			cin >> u >> w;
			if(uw[u]==0||uw[u]>w)uw[u]=w;
			else continue;
			if(maxhurt<attack[i].hurt)maxhurt=attack[i].hurt;
		}*/
	}
}