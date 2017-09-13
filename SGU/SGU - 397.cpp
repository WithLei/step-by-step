#include<cstdio>
#include<cstring> 
#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<set>
typedef long long LL;
using namespace std;
vector<char> text;

int main(){
	char c;
	bool flag=true;
	int i=1;
	
	while(c=getchar()){
		if(c=='\n')break;
		else if(c=='L'){
			continue;
		}
		else if(c=='R'){
			continue;
		}
		else{//c=='a'-'z'
			if(flag){
				text.push_back(c);
				flag=false;
				break;
			}
		}
	}
	vector<char>::iterator now = text.begin();
	
	while(c=getchar()){
		if(c=='\n')break;
		else if(c=='L'){
			if(now+i!=text.begin())i--;
			else continue;
		}
		else if(c=='R'){
			if(now+i!=text.end())i++;
			else continue;
		}
		else{//c=='a'-'z'
				now = text.insert(now+i,c);
				i=1;
		}
	}
	for(vector<char>::iterator it = text.begin();it != text.end();++it)
	cout << *it;
	cout << endl;
}