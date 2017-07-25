#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<vector>
#include<map>
#include<set>
using namespace std;
typedef pair<int,int>point;
set<point> m;
int main(){
	int cases;
	cin >> cases;
	while(cases--){
		m.clear();
		int n,num[1003][3]={0};
		int total=0;
		cin >> n;
		for(int i=0;i<n;i++){
			cin >> num[i][0] >> num[i][1];
			m.insert(point(num[i][0]*n,num[i][1]));
			total+=num[i][0];
		}
		bool flag = true;
		for(set<point>::iterator it = m.begin();it != m.end();++it){
			point p = *it;
			if(m.find(point(2*total-p.first,p.second))==m.end()){
				flag=false;
				break;
			}
		}
		printf("%s\n",flag?"YES":"NO");
	}
} 