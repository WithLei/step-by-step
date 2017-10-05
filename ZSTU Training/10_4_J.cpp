#include<bits/stdc++.h>
using namespace std;

int main(){
	int num;
	char m[30][30];
	while(cin >> num){
		map<char,int>result;
		for(int i=0;i<num;i++){
			memset(m[i],0,sizeof(m[0]));
			string s;
			cin >> s;
			for(int t=0;t<num;t++)
			{
				m[i][t]=s[t];
				result[s[t]]++;
			}
		}
		char temp;
		for(map<char,int>::iterator it = result.begin();it != result.end();++it){
			if(it->second==num-1){
				temp=it->first;
				break;
			}
		}
		int xx , yy;
		for(int x=0;x<num;x++){
			bool flag = false;
			for(int y=0;y<num;y++){
				if(m[x][y]==temp){
					flag = true;
					break;
				}
			}
			if(!flag){
				xx=x+1;
				for(int y=0;y<num;y++){
					if(result[m[x][y]]!=num){
						if(result[m[x][y]]==1){
							yy=y+1;
							break;
						}
						//special
						int a = 0;
						for(int t=0;t<num;t++){
							if(m[x][y]==m[t][y])a++;
						}
						if(a==2){
							yy=y+1;
							break;
						}
				}
			}
		}
		}
		cout << xx << " " << yy << " " << temp << endl;
	}
}
