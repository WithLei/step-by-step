#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<vector>
#include<map>
#include<list>
#include<cmath>
#include<set>
#include<queue>
using namespace std;
int main(){
	int x1,y1,x2,y2,a,b; 
	scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&a,&b);
	if(((x2-x1)/a)%2==0&&((y2-y1)/b)%2==0&&(x2-x1)%a==0&&(y2-y1)%b==0)puts("YES");
	else if(((x2-x1-a)/a)%2==0&&((y2-y1-b)/b)%2==0&&(x2-x1-a)%a==0&&(y2-y1-b)%b==0)puts("YES");
	else puts("NO");
} 