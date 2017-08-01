#include<cstdio>
#include<iostream>
using namespace std;
int range[] = {0,2,7,5,30,169,441,1872,7632,1740,93313,459901,1358657,2504881};
int main(){
	int n;
	while(cin >> n && n!=0){
		cout << range[n] << endl;
	}
}