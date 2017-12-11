#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
using namespace std;
const int maxn = 1e5+4;

int main(){
	std::ios::sync_with_stdio(false);  
    cin.tie(0);cout.tie(0);  
	LL n,m;
	while(cin >> n){
		cin >> m;
		if(n>m)swap(n,m);
		if(n==1||m==1)cout << "0" << endl;
		else if(n==2){
			if(m%2)
				cout << ((m-1)/2)*m-m/2 << endl;
			else  
				cout << m*((m-1)/2) << endl;
		} 
		else if(n==3&&m==3)
			cout << "28" << endl;
		else 
			cout << (n * m) * (n * m-1)/2 << endl;
	}
	return 0;
}
