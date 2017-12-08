#include<bits/stdc++.h>
using namespace std;
const int maxn = 2100000000;
set<long long>result;

long long calc(int a){
	return pow(2,a);
}
long long calc(int a,int b){
	return pow(2,a)*pow(3,b);
}
long long calc(int a,int b,int c){
	return pow(2,a)*pow(3,b)*pow(5,c);
}
long long calc(int a,int b,int c,int d){
	return pow(2,a)*pow(3,b)*pow(5,c)*pow(7,d);
}


int main(){
	std::ios::sync_with_stdio(false);  
    cin.tie(0);cout.tie(0);  
    result.insert(1);
    for(int a=0;calc(a)<maxn;a++){
    	for(int b=0;calc(a,b)<maxn;b++){
    		for(int c=0;calc(a,b,c)<maxn;c++){
    			for(int d=0;calc(a,b,c,d)<maxn;d++){
    				result.insert(calc(a,b,c,d));
				}
			}
		}
	}
	long long r[6012]={0};
	int i = 1;
	for(set<long long>::iterator it = result.begin();it!=result.end();++it){
		r[i]=*it;
		i++;
	}
	int in;
	while(cin >> in && in ){
		if(in%10==1&&in%100!=11)
			cout << "The " << in << "st humble number is ";
		else if(in%10==2&&in%100!=12)
			cout << "The " << in << "nd humble number is ";
		else if(in%10==3&&in%100!=13)
			cout << "The " << in << "rd humble number is ";
		else 
			cout << "The " << in << "th humble number is ";
		cout << r[in] << "."<< endl;
	}
}
