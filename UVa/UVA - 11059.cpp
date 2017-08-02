#include<cstdio>
#include<iostream>
#include<algorithm>
#include<set>
typedef long long LL;
using namespace std;
int main(){
	int cases=1,num;
	while(cin >> num){
		int a[22];
		set<LL>range;
		LL h;
		for(int i=0;i<num;i++)cin >> a[i];
		for(int i=0;i<num;i++){
			int t = i+1;
			h=a[i];
			range.insert(h);
			while(t<num){
				h*=a[t];
				t++;
				range.insert(h);
			}
		}
		set<LL>::iterator it = range.end(); 
		it--;

		if(*it>=0)cout << "Case #" << cases << ": The maximum product is " << *it << '.' << endl;
		else cout << "Case #" << cases << ": The maximum product is " << '0' << '.' << endl;
		cout << endl;
		cases++;
	}
}