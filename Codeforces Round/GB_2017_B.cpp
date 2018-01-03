#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
using namespace std;
const int maxn = 1e2+4;
char mp[maxn][maxn];
typedef pair<int,int>point;
int startx,starty,endx,endy,nowx,nowy;
point director[5];
int result = 0;
int n,m;

void Determine(string str,int x,int y,int now,const point *directors){
	int temp = str[now]-'0';
	int xx = directors[temp].first;
	int yy = directors[temp].second;
	if(x<0||x>=n||y<0||y>=m||mp[x][y]=='#')return;
	if(mp[x][y]=='E'){
		result++;
		return;
	}
	else if(now==str.length()){
		return;
	}
	else{
			Determine(str,x+xx,y+yy,now+1,directors);
	}
	
}

int main(){
	std::ios::sync_with_stdio(false);  
    cin.tie(0);cout.tie(0);  
    director[0].first = 0;
	director[0].second = 1;
	director[1].first = 1;
	director[1].second = 0;
	director[2].first = 0;
	director[2].second = -1;
	director[3].first = -1;
	director[3].second = 0;
	cin >> n >> m;
	for(int x=0;x<n;x++){
		for(int y=0;y<m;y++){
			cin >> mp[x][y];
			if(mp[x][y]=='S'){
				startx = x;
				starty = y;
			}
			else if(mp[x][y]=='E'){
				endx = x;
				endy = y;
			}
		}
	}
	string str;
	cin >> str;
	for(int a=0;a<4;a++){
		for(int b=0;b<4;b++){
			if(b==a)continue;
			for(int c=0;c<4;c++){
				if(a==c||b==c)continue;
				for(int d=0;d<4;d++){
					if(a==d||b==d||c==d)continue;
					point directors[5];
					directors[0]=director[a];
					directors[1]=director[b];
					directors[2]=director[c];
					directors[3]=director[d];
					Determine(str,startx,starty,0,directors);
				}
			}
			
		}
	}
	cout << result << endl;
	return 0;
}
