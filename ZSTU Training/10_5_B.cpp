#include<bits/stdc++.h>
using namespace std;
int main(){
	int num;
	cin >> num;
	if(num%4!=0)cout << "-1" << endl;
	else{
		for(int i=0;i<num/4;i++)cout << "-";
		for(int i=0;i<num/2;i++)cout << "+" ;
		for(int i=0;i<num/4;i++)cout << "-" ;
		cout << endl;
	}
} 
