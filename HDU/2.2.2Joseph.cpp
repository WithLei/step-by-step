#include<cstdio>
#include<iostream>
using namespace std;
bool work(int x,int n){
	for(int i=1;i<=n;i++){
		int temp = x*i;
		if(temp%(2*n)<=n)return false;
	}
	return true;
} 

int main(){
	int n;
	while(cin >> n && n!=0){
		int x=n+1;
		while(!work(x,n)){x++;cout <<x <<endl;}
		cout << x << endl;
	}
}