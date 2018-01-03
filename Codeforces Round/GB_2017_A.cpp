#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
using namespace std;
const int maxn = 1e5+4;
char s[11]={'a','e','i','o','u','1','3','5','7','9'};

int main(){
	std::ios::sync_with_stdio(false);  
    cin.tie(0);cout.tie(0);  
	string str;
	cin >> str;
	int result =0;
	for(int i=0;i<str.length();i++){
		bool flag = true;
		for(int j=0;j<10;j++){
			if(str[i]==s[j]){
				flag = false;
				break;
			}
		}
		if(!flag){
			result++;
		}
	}
	cout << result << endl;
	return 0;
}
