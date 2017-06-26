#include<cstdio>
#include<cstdlib>
#include<cstring> 
#include<string>
#include<iostream>
#include<algorithm>
#include<sstream>
#include<vector>
#include<set>
typedef long long LL;
using namespace std;

LL gcd(LL a,LL b){
	if(a<b){
		LL temp=a;
		a=b;
		b=temp;
	}
	while(b){
		LL temp=a%b;
		a=b;
		b=temp;
	}
	return a;
}

LL getpow(int num){
	LL range=1;
	for(int i=0;i<num;i++)range*=10;
	return range;
}

bool pre_to_int(string& s){
	bool flag=false;
	for(int i=0;i<s.length()-2;i++){
	s[i]=s[i+2];
	if(s[i]=='(')flag=true;
	}
	s.resize(s.length()-2);
	return flag;
}

void get_fraction(string s){
	LL a=atoll(s.c_str());
	LL b=getpow(s.length());
	cout << a/gcd(a,b) << "/" << b/gcd(a,b) << endl;
}

int get_else_length(string s){
	int range=0;
	for(int i=0;s[i]!='(';i++,range++);
	return range;
}

int main(){
	int cases;
	cin >> cases;
	while(cases--){
		string s;
		cin >> s;
		bool flag = pre_to_int(s);
		if(!flag){//ÎÞÀ¨ºÅ 
			get_fraction(s);
		}
		else{//ÓÐÀ¨ºÅ 
			int el=get_else_length(s); 
			char els[23]={0};
			for(int i=0;i<el;i++)els[i]=s[i];
			LL elnum = atoll(els);
			char xhs[23]={0};
			for(int i=el+1,t=0;i<s.length()-1;t++,i++)xhs[t]=s[i];
			LL xhnum = atoll(xhs);
			LL a=xhnum/gcd(xhnum,getpow(s.length()-el-2)-1);
			LL b=(getpow(s.length()-el-2)-1)/gcd(xhnum,getpow(s.length()-el-2)-1);
			cout << (elnum*b+a)/gcd(elnum*b+a,getpow(el)*b) << "/" << (getpow(el)*b)/gcd(elnum*b+a,getpow(el)*b) << endl;
		}
	}
} 