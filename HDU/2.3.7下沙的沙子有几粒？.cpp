#include<bits/stdc++.h>
const int maxn = 21;
using namespace std;
typedef long long LL;
int main(){
	int n,m;
	LL num[maxn][maxn] = {0};
		for(int i=0;i<21;i++)
			num[i][0] = 1;
		for(int i=1;i<21;i++){
			for(int t=1;t<21;t++){
				if(t>i)break;
				num[i][t]=num[i-1][t]+num[i][t-1];
			}
		}
	while(cin >> n >> m ){
		cout << num[n][m] << endl;
	}
}
