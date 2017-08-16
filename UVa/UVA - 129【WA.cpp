#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<map>
using namespace std;
int no,num;

bool judge(char *s,int cur){
	int cat;
	for(int i=cur-1;i>=0;i++){
		if(s[i]==s[cur]){
			if(i==cur-1)return false;
			cat = i;
			i--;
			cur--;
			while(cat<cur){
				if(s[i]==s[cur])return false;
				i--,cur--;
			}
			return true;
		}
	}
	return true;
}

void work(char *s,int cur){
	if(cur==no&&s[0]){
		for(int i=0;i<cur;i++)cout << s[i];
		cout << endl;
	}
	else{
			for(int i=0;i<num;i++){
				s[cur]='A'+i;
			if(judge(s,cur)){
				work(s,cur+1);
			}
		}
	}
}

int main(){
	while(cin >> no >> num && (no||num)){
		char s[100]={0};
		work(s,0);
	}
	return 0;
}