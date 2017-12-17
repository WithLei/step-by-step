#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
using namespace std;
const int maxn = 1e5+4;

int main(){
	std::ios::sync_with_stdio(false);  
    cin.tie(0);cout.tie(0);  
	int n;
	cin >> n;
	int one=0,two=0;
	while(n--){
		int temp;
		cin >> temp;
		if(temp==1)one++;
		else two++;
	}
	if(one==0)cout << "0" << endl;
	else 
		cout << min(one,two)+(one-min(one,two))/3 << endl;
	return 0;
}
