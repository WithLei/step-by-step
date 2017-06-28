#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<iostream>
#include<sstream>
#include<algorithm>
#include<queue>
#include<set>
#include<vector>
using namespace std;
const int maxn = 10000+3;
int x(int num){
	return num/10+(num%10)*10;
}
int main(){
   char s[7];
   int hour,minute,xhour,xminute;
   scanf("%s",s);
   hour=(s[0]-48)*10+s[1]-48;
   minute=(s[3]-48)*10+s[4]-48;
   xhour=(s[1]-48)*10+s[0]-48;
   int range;
   if(xhour>=minute&&xhour<=59){
	range=xhour-minute;
   }else{
   	bool flag=false;
   	int h=hour;
   	while(!flag){
	   	h++;
   	if(h>=24)h-=24;
   	if(x(h)<=59){
   		if(h>hour)
	   	range=x(h)+60*(h-hour)-minute;
	   	else 
	   	range=x(h)+60*(24+h-hour)-minute;
	   	flag=true;
	   }
	   }
   }
   cout << range << endl;
}