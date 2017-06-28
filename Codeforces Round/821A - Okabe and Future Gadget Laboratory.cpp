#include<cstdio>
#include<cstdlib>
#include<cstring> 
#include<string>
#include<iostream>
#include<algorithm>
#include<sstream>
#include<vector>
#include<cmath>
#include<set>
typedef long long LL;
using namespace std;
const int maxn=50+3;
int main(){
	int num[maxn][maxn]={0},c;
	cin >> c;
	for(int x=0;x<c;x++){
		for(int y=0;y<c;y++){
			cin >> num[x][y];
		}
	}
	for(int x=0;x<c;x++){
		for(int y=0;y<c;y++){
			bool flag=false;
			if(num[x][y]==1)continue;
			for(int xx=0;xx<c;xx++){
				if(xx==x)continue;
				for(int yy=0;yy<c;yy++){
					if(yy==y)continue;
					if(num[x][y]==num[xx][y]+num[x][yy]){
						flag=true;
						break;
					}
				}
				if(flag)break;
			}
			if(!flag){
				cout << "No" << endl;
				return 0;
			}
		}
	}
	cout << "Yes" << endl;
	return 0;
}