#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include<sstream>
#include<iostream>
#include<algorithm>
#include<set>
#include<queue> 
#include<vector>
using namespace std;
const int maxn = 1000+4;
vector<string>str[maxn];
void print(int len,string s){
	cout << s; 
	for(int i=0;i<len-s.length()+1;i++)cout << ' ';
}
int main(){
	int col=0,rows=0;//col->单词数 rows->行数
	int num[maxn]={0};
	string code,alpha;
	while(getline(cin,code)){
		stringstream ss(code);
		while(ss >> alpha){
			num[col]=max(num[col],(int)alpha.length());
			col++;
			str[rows].push_back(alpha);
		}
		rows++;col=0;
	} 
	for(int i=0;i<rows;i++){
		int j;
		for(j=0;j<str[i].size()-1;j++){
			print(num[j],str[i][j]);
		}
		cout << str[i][j] << endl;
	}
	return 0;
}