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
		//ȥǰ��0
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
			//��С���� 
			//�ҵ�һ����Ч���� 
		}
		else{
			//��С���� 
			int ex=length-1;
			//����С���㣬�±�1��֮���Ԫ�غ��� 
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
