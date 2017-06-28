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
	int c,v0,v1,a,l,now=0;
	cin >> c >> v0 >> v1 >> a >> l;//pages start <=v1 +=a -=l
	if(v0<=v1)now+=v0;
	else now+=v1;
	int t=1;
	while(now<c){
		if(v0+t*a<=v1)now+=v0+t*a-l;
		else now+=v1-l;
		t++;
	}
	cout << t << endl;
} 
//333 17 50 10 16