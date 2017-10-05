#include<bits/stdc++.h>
using namespace std;

string alpha[100]={
".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..",
"--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."
};

string salpha[100]={
"=.-","=-...","=-.-.","=-..","=.","=..-.","=--.","=....","=..","=.---","=-.-","=.-..",
"=--","=-.","=---","=.--.","=--.-","=.-.","=...","=-","=..-","=...-","=.--","=-..-","=-.--","=--.."
};

int main(){
	string s;
	while(cin >> s){
		for(int i=0;i<s.length();i++){
			if(s[i]=='/')s[i]=' ';
			if(s[i-1]==' '&&s[i]==' ')s[i]='=';
		}
		stringstream ss(s);
		string temp;
		while(ss>>temp){
			for(int i=0;i<26;i++)
				if(!temp.compare(alpha[i]))//connect!
				{
					printf("%c",i+'A');
					break;
				}
			for(int i=0;i<26;i++)
				if(!temp.compare(salpha[i]))//connect!
				{
					printf(" %c",i+'A');
					break;
				}
		}
		cout << endl;
	}
}
