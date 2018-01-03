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
	int num[maxn];
	cin >> num[0];
	int minnum = num[0];
	for(int i=1;i<n;i++){
		cin >> num[i];
		minnum = min(num[i],minnum);
	}
	int result = 0,last=0;
	for(int i=0;i<n;i++){
		if(num[i]==minnum){
			if(result)
				result=min(result,i-last);
			else 
				if(num[last]==minnum)
					result=i-last;
			last = i;
		}
	}
	
	cout << result << endl;
	return 0;
}
