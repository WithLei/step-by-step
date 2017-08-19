#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<map>
using namespace std;
int no,num,cunt=0;

bool judge(char *s,int cur){
	int cat;
	for(int i=cur-1;i>=0;i--){
		if(s[i]==s[cur]){
			if(i==cur-1)return false;
			cat = i;
			int ii = i;
			ii--;
			int curr = cur;
			curr--;
			bool flag = true;
			while(cat<curr){
				if(s[ii]!=s[curr]){
//					cout << s << ' ' << ii << ' ' << curr << endl; 
					flag=false;
					break;
				}
				ii--,curr--;
			}
			if(flag)return false;
		}
	}
//	cout << "dog" << endl;
	return true;
}

void work(char *s,int cur){
	if(cunt==no&&s[0]){
		int i;
		for(i=0;s[i];i++){
			if(i%64==0&&i)cout << endl;
			else if(i%4==0&&i)cout << ' ';
			cout << s[i];
		}
		cout << "\n" << i << endl;
	}
	else if(cunt<no){
			for(int i=0;i<num;i++){
				s[cur]='A'+i;
				if(judge(s,cur)){
					cunt++;
					work(s,cur+1);
				}
				else s[cur]='\0';
		}
	}
}

int main(){
	while(cin >> no >> num && (no||num)){
		char s[100]={0};
		cunt = 0;
		work(s,0);
	}
	return 0;
}
//ABAC ABCA CBAB CABA CABC ACBA BCAB
//ABAC ABCA CBAB CABA CABC ACBA CABA