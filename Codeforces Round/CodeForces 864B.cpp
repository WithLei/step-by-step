#include<bits/stdc++.h>
using namespace std;
int main(){
	string s,pro;
	int len;
	cin >> len >> s;
	for(int i=0;i<len;i++)
		if(s[i]>='A'&&s[i]<='Z')s[i]=' ';
	stringstream ss(s);
	int maxnum=0;
	while(ss >> pro){
		set<char>k;
		for(int i=0;i<pro.length();i++){
			k.insert(pro[i]);
		}
		maxnum = max(maxnum,(int)k.size());
	}
	cout << maxnum << endl;
}
