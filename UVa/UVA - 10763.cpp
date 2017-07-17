#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<queue>
#include<stack>
#include<map>
using namespace std;
const int maxn = 500000+3;
int mark[maxn][3];
int main(){
	int cases,a,b;
	while(~scanf("%d",&cases)&&cases!=0){
		map<int,map<int,int> >ex;
		ex.clear();
		for(int i=0;i<cases;i++){
			cin >> mark[i][0] >> mark[i][1];
			ex[mark[i][0]][mark[i][1]]++;
		}
		bool flag = true;
		for(int i=0;i<cases;i++){
			if(ex[mark[i][0]][mark[i][1]]!=ex[mark[i][1]][mark[i][0]])
			flag = false;
		}
		if(flag)cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
/*
10
1 2
2 1
3 4
4 3
100 200
200 100
57 2
2 57
1 2
2 1
10
1 2
3 4
5 6
7 8
9 10
11 12
13 14
15 16
17 18
19 20
0
*/
