#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<string>
#include<stack>
using namespace std;
int main(){
	int cases;
	cin >> cases;
	getchar();
	while(cases--){
		stack<char>s;
		string in;
		getline(cin,in);
		for(int i=0;i<in.length();i++){
			if(s.empty())s.push(in[i]);
			else if(in[i]=='('||in[i]=='[')s.push(in[i]);
			else if(in[i]==')'){
				if(s.top()=='(')s.pop();
				else {s.push(in[i]);}
			}
			else if(in[i]==']'){
				if(s.top()=='[')s.pop();
				else s.push(in[i]);
			}
		}
		if(s.empty())cout << "Yes" << endl;
		else cout << "No" << endl;
	}
}
 
/*
 3
([])
(([()])))
([()[]()])()
*/