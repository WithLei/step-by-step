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
		if((r/x) >= k && (l/y) <= k)cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	
}