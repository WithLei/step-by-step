#include<cstdio>
#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
bool work(int num,int a,int b,int c,int d,int e){
	map<int,int>k;
	for(int i=0;i<5;i++){
		if(num%10!=a&&num%10!=b&&num%10!=c&&num%10!=d&&num%10!=e&&k[num%10]!=1){
			k[num%10]=1;
			num/=10;
		}
		else return false;
	}
	return true;
}
int main(){
	int num[] = {0,1,2,3,4,5,6,7,8,9};
	int n;
	bool ha = false;
	n=0;
	while(cin >> n && n){
		if(ha)cout << endl;
		ha = true;
		bool flag = false;
		for(int a=0;a<10;a++){
			for(int b=0;b<10;b++){
				if(b==a)continue;
				for(int c=0;c<10;c++){
					if(c==a||c==b)continue;
					for(int d=0;d<10;d++){
						if(d==a||d==b||d==c)continue;
						for(int e=0;e<10;e++){
							if(e==a||e==b||e==c||e==d)continue;
							int anum = a*10000+b*1000+c*100+d*10+e;
//							cout << anum << endl;
//							printf("%d / %d%d%d%d%d = %d\n",anum*n,a,b,c,d,e,n);
							if(anum*n<100000&&work(anum*n,a,b,c,d,e)){
								printf("%d / %d%d%d%d%d = %d\n",anum*n,a,b,c,d,e,n);
								flag = true;
							}
						}
					}
				}
			}
		}
		if(!flag)cout << "There are no solutions for " << n << '.' << endl;
	}
}