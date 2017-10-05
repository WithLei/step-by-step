#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e6;

struct node{
	int num[10];
	bool flag;
	int total;
}m[maxn];

int main(){
	int n;
	while(cin >> n){
		memset(m,0,sizeof(m));
		for(int t=0;t<n;t++){
			m[t].flag=false;
			string num;
			cin >> num;
			for(int i=0;i<num.length();i++){
				m[t].num[num[i]-'0']=1;
			}
		}
		int range=0;
		for(int i=0;i<n;i++){
			if(m[i].flag)continue;
			else{
				m[i].flag=true; 
				for(int com=i+1;com<n;com++){
						//开始匹配数字
						bool f = true;
						for(int ans = 1;ans<=9;ans++){
							if(m[com].num[ans]!=m[i].num[ans]){
//								cout << i << " " << com << " " << ans <<endl; 
								f = false;
								break;
							}
						} 
						if(f){
							//匹配成功
							m[com].flag=true;
						}
				}
				range++;
			}
		}
		cout << range << endl;
	}
} 
