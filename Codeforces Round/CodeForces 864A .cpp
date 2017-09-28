#include<bits/stdc++.h>
using namespace std;
int game[202]={0},result[202]={0};
int main(){
	int num,a=0;
	cin >> num;
	while(num--){
		int n;
		cin >> n;
		if(!game[n]){
			result[a++]=n;
		}
		game[n]++;
	}
	if(a!=2)cout << "NO" << endl;
	else if(game[result[0]]!=game[result[1]])cout << "NO" << endl;
	else{
		cout << "YES" << endl;
		cout << result[0] << " " << result[1] << endl;
	}
}
