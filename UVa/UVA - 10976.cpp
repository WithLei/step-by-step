#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int gcd(int a,int b){
	while(b){
		int temp = a%b;
		a=b;
		b=temp;
	}
	return a;
}
int main(){
	int num;
	while(cin >> num){
		vector<int>a;
		for(int i=num+1;i<=2*num;i++){
			if((i-num)/gcd(i-num,i*num)==1){
				a.push_back(i);
			}
		}
		cout << (int)a.size() << endl;
		for(vector<int>::iterator it = a.begin();it != a.end();it++){
			int i = *it;
			printf("1/%d = 1/%d + 1/%d\n",num,i*num/gcd(i-num,i*num),*it);
		}
	}
} 