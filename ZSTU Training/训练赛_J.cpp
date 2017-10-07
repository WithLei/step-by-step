#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const int maxn = 107;
string s;
int m[maxn][maxn],maxx,maxy,minx,miny;

void work(int step,int len,int x,int y,char now){
	m[x][y]=1;
	if(step==len)return;
	else{
		if((now=='R'&&s[step]=='F')||(now=='F'&&s[step]=='R')||
		(now=='B'&&s[step]=='L')||(now=='L'&&s[step]=='B')){//向右 
			if(maxx<x+1)maxx=x+1;
			work(step+1,len,x+1,y,'R');
		}
		else if((now=='R'&&s[step]=='B')||(now=='F'&&s[step]=='L')||
		(now=='B'&&s[step]=='R')||(now=='L'&&s[step]=='F')){//向左 
			if(minx>x-1)minx=x-1;
			work(step+1,len,x-1,y,'L');
		}
		else if((now=='R'&&s[step]=='L')||(now=='F'&&s[step]=='F')||
		(now=='B'&&s[step]=='B')||(now=='L'&&s[step]=='R')){//向上 
			if(maxy<y+1)maxy=y+1;
			work(step+1,len,x,y+1,'F');
		}
		else if((now=='R'&&s[step]=='R')||(now=='F'&&s[step]=='B')||
		(now=='B'&&s[step]=='F')||(now=='L'&&s[step]=='L')){//向右 
			if(miny>y-1)miny=y-1;
			work(step+1,len,x,y-1,'B');
		}
	}
	return;
}

int main(){
	int cases;
	cin >> cases;
	cout << cases << endl;
	for(int i=1;i<=cases;i++){
		maxx=minx=0;
		miny=maxy=102;
		cin >> s;
		memset(m,0,sizeof(m));
		int step = 0;
		work(step,s.length(),0,102,'R');
		cout << maxy-miny+3 << " " << maxx-minx+2 << endl;
		//top
		for(int x=minx;x<=maxx+1;x++)
			cout << "#";
		cout << endl;
		
		for(int y=maxy;y>=miny;y--){
			for(int x=minx;x<=maxx;x++){
				if(m[x][y]==1)cout << ".";
				else cout << "#";
			} 
			cout << "#" << endl;
		}
		
		//bottom
		for(int x=minx;x<=maxx+1;x++)
			cout << "#";
		cout << endl;
	}
}
