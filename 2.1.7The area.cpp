#include<stdio.h>


int main(){
	int cases;
	double x0,y0,x2,y2,x3,y3,a,k,b,range;
	scanf("%d",&cases);
	while(cases--){
		scanf("%lf%lf%lf%lf%lf%lf",&x0,&y0,&x2,&y2,&x3,&y3);
		a=(y2-y0)/(x2*x2-2*x0*x2+x0*x0);
			k=(y3-y2)/(x3-x2);
			b=y2-k*x2;
			range=a*(x3*x3*x3-x2*x2*x2)/3.0-a*x0*(x3*x3-x2*x2)+(a*x0*x0+y0)*(x3-x2)-k*(x3*x3-x2*x2)/2.0-b*(x3-x2);
			printf("%.2lf\n",range);
	}
} 