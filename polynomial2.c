#include <stdio.h>
#include <math.h>
int main(void){
	double x;
	double r;
	double a,b,c,d,e,f;
	scanf("%lf",&a);
	printf("x^5 coefficient: %lf\n",a);
	scanf("%lf",&b);
	printf("x^4 coefficient: %lf\n",b);
	scanf("%lf",&c);
	printf("x^3 coefficient: %lf\n",c);
	scanf("%lf",&d);
	printf("x^2 coefficient: %lf\n",d);
	scanf("%lf",&e);
	printf("x^1 coefficient: %lf\n",e);
    scanf("%lf",&f);
	printf("x^0 coefficient: %lf\n",f);
		scanf("%lf",&x);
	printf("enter a value for x: %lf\n",x);
r= (a*(x*x*x*x*x))+(b*(x*x*x*x))-(c*(x*x*x))-d*(x*x)+e*x-f;
	printf("result: %lf\n",r);



}
