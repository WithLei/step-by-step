#include<bits/stdc++.h>
using namespace std;

int gcd(int n,int m){
	if(n<m){
		int temp=n;
		n=m;
		m=temp;
	}
	int r;
	while(m){
		r=n%m;
		n=m;
		m=r;
	}
	return n;
}

int main(){
	int cases;
	cin >> cases;
	for(int i=0;i<cases;i++){
		int a[10],b[10];
		int len;
		cin >> len;
		for(int t=0;t<len;t++){
			cin >> a[t];
		}
		for(int t=0;t<len;t++){
			cin >> b[t];
		}
		int up=b[len-1],down=a[len-1],range=1;
		up = up/gcd(b[len-1],a[len-1]);
		down = down/gcd(b[len-1],a[len-1]);
		for(int t=len-2;t>=0;t--){
			int tempup = up;
			up=b[t]*down;
			down=down*a[t]+tempup;
			tempup=up;
			int tempdown=down;
			up = up/gcd(tempup,tempdown);
			down = down/gcd(tempup,tempdown);
		}
		cout <<"Case #" << cases << ": ";
		cout << up << " " << down << endl;
	}
} 
