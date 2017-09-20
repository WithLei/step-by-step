#include<bits/stdc++.h>
using namespace std;
const int maxn = 1000+7;
int g[8]={0};

bool cmp(const int a,const int b){
	if(a!=b)return a>b;
}

int main(){
	int group;
	char num[8];
	cin >> group ;
	for(int i=0;i<group;i++){
		cin >> num;
		for(int t=0;t<7;t++){
			g[t]+=num[t]-'0';
		}
	}
	sort(g,g+7,cmp);
	cout << g[0] << endl;
} 
