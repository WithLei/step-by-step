#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<queue>
#include<stack>
#include<map>
using namespace std;
const int maxn=120000+5;
map<string,int>alpha;
vector<string>range;
bool work(string s){
	for(int i=1;i<s.length();++i){
		//cout << s.substr(0,i) << ' ' << s.substr(i,s.length()-i) << endl;
		if(alpha[s.substr(0,i)]==0)continue;
		if(alpha[s.substr(i,s.length()-i)]==0)continue;
		return true;
	}
	return false;
}
int main(){
	string s[maxn];
	int cnt = 0;
	while(cin >> s[cnt]){
		alpha[s[cnt]]=1;
		cnt++;
	}
	for(int i=0;i<cnt;++i){
		if(work(s[i]))cout << s[i] << endl;
	}
}