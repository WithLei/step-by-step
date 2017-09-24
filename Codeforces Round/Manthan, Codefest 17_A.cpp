#include<bits/stdc++.h>
using namespace std;
map<string,int>alpha;
int main(){
	int num;
	cin >> num;
	while(num--){
		string s;
		cin >> s;
		if(alpha[s]==1)cout << "YES" << endl;
		else{
			cout << "NO" << endl;
			alpha[s]=1; 
		}
	}
} 
