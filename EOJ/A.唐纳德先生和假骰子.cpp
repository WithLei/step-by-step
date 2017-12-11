#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef pair<int,int>point; 
using namespace std;
const int maxn = 1e5+4;

int main(){
	std::ios::sync_with_stdio(false);  
    cin.tie(0);cout.tie(0);  
	int n,x[7],y[7],result[40]={0};
	cin >> n;
	for(int i=0;i<6;i++)
		cin >> x[i];
	for(int i=0;i<6;i++)
		cin >> y[i];
	int now=0;
	for(int i=0;i<6;i++){
		for(int j=0;j<6;j++){
			result[(x[i]+y[j])%n]++;
		}
	}
	bool flag = true;
	for(int i=0;i<n;i++){
//		cout << result[i] << endl;
		if(result[i]!=result[0]){
			flag = false;
			break;
		}
	}
	if(flag)
		cout << "YES" << endl;
	else 
		cout << "NO" << endl;
	return 0;
}
