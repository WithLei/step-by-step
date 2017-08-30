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
int main(){
	double l,r,x,y,k;
	while(cin >> l >> r >> x >> y >> k){
		bool flag = true;
		for(int i=x;i<=y;i++)
			if(r >= k*i && l <= k*i){
			cout << "YES" << endl;flag=false;break;}
		if(flag)cout << "NO" << endl;
	}
	
}