#include<bits/stdc++.h>
using namespace std;
const int maxn = 200000+7;
list<int>line[maxn];

int main(){
	int num,first,oth,rows=0,theend=0;
	cin >> num >> first;
	line[0].push_back(first);
	for(int i=1;i<num;i++){
		cin >> oth;
		if(line[0].back()>=oth){//非递增 
			bool flag = false;
			
			//二分 
			int high = rows,t = high/2,low = 0;
			while(high>=low){
				if(line[t].back()<oth&&line[t-1].back()>=oth){
					flag = true;
					line[t].push_back(oth);
					break;
				}
				else if(line[t].back()>=oth)low = t+1;
				else high = t-1;
				t=low+((high-low)/2);
			}
			
			
//			for(int t=1;t<=rows&&!a;t++)
//				if(line[t].back()<oth){
//					flag = true;
//					line[t].push_back(oth);
//					break;
//				}
			if(!flag){
				line[++rows].push_back(oth);
		}
	}
	else{//递归 
		line[0].push_back(oth);
	}
}
	for(int i=0;i<=rows;i++){
		for(list<int>::iterator it = line[i].begin();it != line[i].end();){
			cout << *it ;
			if(++it!=line[i].end())cout << " " ;
			else break;
		}
		cout << endl;
	}
}
