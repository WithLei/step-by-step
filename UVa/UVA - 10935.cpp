#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<queue>
using namespace std;
int main(){
	vector<int> range;
	int a;
	while(~scanf("%d",&a)&&a!=0){
		range.clear();
		queue<int> num;
		if(!num.empty())break;
		if(a==1){
			cout << "Discarded cards:\n" << "Remaining card: 1" << endl;
			continue;
		}
		for(int i=1;i<=a;i++){
			num.push(i);
		}
		while((int)num.size()>=2){
			range.push_back(num.front());
			num.pop();
			if((int)num.size()<2)break;
			else{
				int ex=num.front();
				num.pop();
				num.push(ex);
			}
		}
		cout << "Discarded cards:" ;
		int i=0;
		for(i=0;i<(int)range.size()-1;i++)cout << ' ' <<range[i] << ',' ;
		cout << ' ' << range[i] << "\nRemaining card: " << num.front() << endl;
	}
} 