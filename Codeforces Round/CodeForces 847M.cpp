#include<bits/stdc++.h>
using namespace std;
const int maxn = 10000+7;
int main(){
	int num,t[maxn];
	cin >> num >> t[0] >> t[1];
	int cha = t[1] - t[0];
	bool flag;
	if(cha==0)flag = false ;
	else flag =true ;
	for(int i=2;i<num;i++){
		cin >> t[i];
		if(t[i]-t[i-1]!=cha){
			flag = false;
		}
	}
	if(flag)cout << t[num-1]+cha << endl;
	else cout << t[num-1] << endl;
}
