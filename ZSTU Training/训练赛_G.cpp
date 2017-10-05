#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

double ccl(int a,int b,int c){
	double result;
	double x = b/(2.0*a);
	result = (-1)*x*x*a+b*x+c;
	return result;
}

int main(){
	int cases,num,a,b,c,result;
	double maxnum;
	cin >> cases;
	while(cases--){
		maxnum=0;
		result=1;
		cin >> num;
		for(int i=1;i<=num;i++){
			cin >> a >> b >> c;
//			cout << "result: " << ccl(a,b,c) << endl;
			if(ccl(a,b,c)>=maxnum){
				maxnum=ccl(a,b,c);
				result=i;
			}
		}
		cout << result << endl;
	}
}
