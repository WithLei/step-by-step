#include<bits/stdc++.h>
using namespace std;
int main(){
	int result=0;
	int r,x1,y1,x2,y2,x3,y3;
	cin >> r;
	cin >> x1 >> y1 >> x2 >> y2 >>x3 >> y3;
	double r1 = sqrt(1.0*x1*x1+1.0*y1*y1),r2 = sqrt(1.0*x2*x2+1.0*y2*y2),r3 = sqrt(1.0*x3*x3+1.0*y3*y3);
	int temp;	
	if(r1>10*r)temp=0;
	else
		for(int i=0;i<10;i++){
			if(r1>=i*r&&r1<=(i+1)*r){
				temp=10-i;
				break;
			}
		}
		result+=temp;
//	cout << result << endl;

	if(r2>10*r)temp=0;
	else
		for(int i=0;i<10;i++){
			if(r2>=i*r&&r2<=(i+1)*r){
				temp=10-i;
				break;
			}
		}
		result+=temp;
//	cout << result << endl;
	if(r3>10*r)temp=0;
	else
		for(int i=0;i<10;i++){
			if(r3>=i*r&&r3<=(i+1)*r){
				temp=10-i;
				break;
			}
		}
		result+=temp;
	cout << result << endl;
	
}
