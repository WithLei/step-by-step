#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
#include<map>
#include<sstream>
#include<vector>
const int maxn = 10000+3;
using namespace std;

int main(){
	int cases;
	cin >> cases;
	while(cases--){
		string a,b;
		cin >> a >> b;
		for(int i=0;i<a.length();i++){
			if(a[i]=='{'||a[i]=='}'||a[i]==':'||a[i]==',')a[i]=' ';
		}
		for(int i=0;i<b.length();i++){
			if(b[i]=='{'||b[i]=='}'||b[i]==':'||b[i]==',')b[i]=' ';
		}
		stringstream sa(a);
		string key,v;
		map<string,string>m,fresh;
		while(sa >> key){
			sa >> v;
			m[key]=v;
		}
		stringstream sb(b);
		vector<string>jia,jian,change;
		while(sb >> key){
			sb >> v;
			fresh[key]=v;
			if(m.count(key)==0){//增加 
				jia.push_back(key);
			}
			else if(m[key]!=v){//change
				change.push_back(key);
			}
		}
		//遍历m查删减
		for(map<string,string>::iterator it = m.begin();it!=m.end();++it){
			if(fresh.count(it->first)==0)jian.push_back(it->first);
		}
		int c=(int)jia.size()+(int)jian.size()+(int)change.size();
		if(c==0)cout << "No changes" << endl;
		if((int)jia.size()>0){
			cout << "+" << jia[0];		
			for(int i=1;i<(int)jia.size();i++)cout << "," << jia[i];
			cout << "\n" ;
		}
		if((int)jian.size()>0){
			cout << "-" << jian[0];		
			for(int i=1;i<(int)jian.size();i++)cout << "," << jian[i];
			cout << "\n" ;
		}
		if((int)change.size()>0){
			cout << "*" << change[0];		
			for(int i=1;i<(int)change.size();i++)cout << "," << change[i];
			cout << "\n" ;
		}
		cout << "\n" ;
	}
}

/*
3
{a:3,b:4,c:10,f:6}
{a:3,c:5,d:10,ee:4}
{x:1,xyz:123456789123456789123456789}
{xyz:123456789123456789123456789,x:1}
{first:1,second:2,third:3}
{third:3,second:2}
*/