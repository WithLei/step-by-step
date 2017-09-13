#include<cstdio>
#include<cstring> 
#include<iostream>
#include<algorithm>
#include<list>
#include<cmath>
#include<set>
typedef long long LL;
using namespace std;
list<char> text;

int main(){
	char c;
	list<char>::iterator now = text.begin();
	
	while(c=getchar()){
		if(c=='\n')break;
		else if(c=='L'){
			if(now!=text.begin())now--;
			else continue;
		}
		else if(c=='R'){
			if(now!=text.end())now++;
			else continue;
		}
		else{//c=='a'-'z'
			text.insert(now,c);
		}
	}
	for(list<char>::iterator it = text.begin();it != text.end();++it)
	cout << *it;
	cout << endl;
}