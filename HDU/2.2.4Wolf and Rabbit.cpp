#include<cstdio>
#include<iostream>
using namespace std;
bool work(int n,int m){
	while(m){
		int temp = n%m;
		n=m;
		m=temp;
	}
	if(n==1)return false;
	else return true;
}
int main(){
	int cases;
	cin >> cases;
	while(cases--){
		int n,m;
		cin >> n >> m;
		if(work(n,m))cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}