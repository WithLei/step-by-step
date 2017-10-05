#include<bits/stdc++.h>
using namespace std;

double R(int x,int y){
	return sqrt(1.0*x*x+1.0*y*y);
}

int main(){
	int r,x,y;
	double dis;
	while(cin >> r){
		int result=0;
		for(int i=0;i<3;i++){
		cin >> x >> y ;
		dis = R(x,y);
		int temp;
		if(dis>10*r)continue;
		for(int i=0;i<r;i++){
			if(dis>=i*r&&dis<=(i+1)*r){
				temp = i;
				break;
			}
		}
		result+=10-temp;
	}
	cout << result << endl;
	}
}
