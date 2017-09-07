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
	int n,k,t,range=0;
	cin >> n >> k >> t;
	if(t<=k)range=t;
	else if(t>k&&t<=n)range=k;
	else range=k-t+n;
	cout << range << endl;
}