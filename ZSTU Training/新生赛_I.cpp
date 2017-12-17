#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
using namespace std;
const int maxn = 200;

void RemovePreZero(char *str){
	int pos=-1,l=strlen(str);
	for(int i=0;i<l;i++){
		if(str[i]=='0')pos++;
		else break;
	}
	if(pos!=-1)
		for(int i=0;i<l-pos;i++)
			str[i]=str[i+pos+1];
	str[l-1-pos]='\0';
}

int main(){
	std::ios::sync_with_stdio(false);  
    cin.tie(0);cout.tie(0);  
	char str[maxn];
	int k;
	while(cin >> str){
		cin >> k;
		//去前置0
		RemovePreZero(str); 
		
		bool flag = false;
		int length = strlen(str),point;
		cout << str << endl;
		
		for(int i=0;i<length;i++)
			if(str[i]=='.'){
				point = i;
				flag = true;
				break;
			}
				
		if(flag){
			//有小数点 
			//找第一个有效数字 
		}
		else{
			//无小数点 
			int ex=length-1;
			//插入小数点，下标1及之后的元素后移 
			char temp = str[1];
			for(int i=2;i<=length;i++)
			{
				char tt = str[i];
				str[i]=temp;
				temp=tt;
			}
			length++;
			str[1]='.';
			str[length]='\0';
			if(length-1==k){
				cout << str << "e" << length-2 << endl;
			}
			else if(length-1<k){//+0
					cout << str ;
					for(int i=0;i<k-length+1;i++)
						cout << "0" ;
					cout << "e" << length-2 << endl;
			}
			else{
				for(int i=0;i<k+1;i++)
					cout << str[i];
				cout << "e" << length-2 << endl;
			}
		}
	}
	return 0;
}
