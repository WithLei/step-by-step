#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
using namespace std;
const int maxn = 1e5+4;

int main(){
	std::ios::sync_with_stdio(false);  
    cin.tie(0);cout.tie(0);  
	int n,a,b;
	cin >> n >> a >> b;
	int result = min(a,b);
	while(1){
		if(a/result+b/result>=n)
		{
			cout << result << endl;
			return 0;
		}
		result--;
	}
}
