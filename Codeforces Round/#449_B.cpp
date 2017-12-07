#include<bits/stdc++.h>
using namespace std;

int k,p;

long long powten(long long num,int t){
	for(int i=0;i<t;i++){
		num*=10;
	}
	return num;
}

long long calcu(long long n){
	long long result = n;
	int l = 0;
	long long t = n;
	while(t){
		t/=10;
		l++;
	}
	for(int i=0;i<l;i++)
		result*=10;
	long long temp = 0;
	t = n;
	for(int i=l-1;i>=0;i--){
		temp += powten(n%10,i);
		n/=10;
	}
	result+=temp;
	result%=p;
	return result;
}

int main(){
	cin >> k >> p;
	long long sum = 0;
	for(int i=1;i<=k;i++){
		sum+=calcu(i);
		sum%=p;
	}
	cout << sum << endl;
}
