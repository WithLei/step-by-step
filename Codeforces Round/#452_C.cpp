#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
using namespace std;
const int maxn = 1e5+4;
int r[]={3,2,1,2};

int main(){
	std::ios::sync_with_stdio(false);  
    cin.tie(0);cout.tie(0);  
	int n;
	cin >> n;
	if(n==2)
		cout << "1\n1 1" << endl;
	else if(n%2==0){
		if(n%4==0){
			cout << "0" << endl;
			cout << n/2;
			for(int i=1;i<=n/4;i++){
				cout << " " << i << " " << n-i+1;
			}
			cout << endl;
		}
		else{
			cout << "1" << endl;
			cout << n/2;
			n-=2;
			for(int i=1;i<=n/4;i++){
				cout << " " << i << " " << n-i+1;
			}
			cout << " " << n+1 << endl;
		}
	}
	else{
		if((n+1)%4==0)cout << "0" << endl;
		else cout << "1" << endl;
		cout << (n+1)/2 << " 1 2"; 
		int flag = -1;
		for(int i=4;i<=n;i+=r[flag]){
			flag++;
			flag%=4;
			cout << " " << i ;
		}
		cout << endl;
	}
	return 0;
}
