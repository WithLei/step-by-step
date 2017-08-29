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
	int r ,d;
	while(cin >> r >> d){
		int n,x,y,rr,range=0;
		cin >> n;
		for(int i=0;i<n;i++){
			cin >> x >> y >> rr;
			cout << x*x+y*y << " " << (d+rr)*(d+rr) <<  " " << x*x+y*y << " " << (r-rr)*(r-rr) << endl;
			if(x*x+y*y >= (d+rr)*(d+rr) && x*x+y*y <= (r-rr)*(r-rr))range++;
		}
		cout << range << endl;
	}
}