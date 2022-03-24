#include<stdio.h>

int function1(float value){
	float a,b,c,d,valu;
	float x0,x1,x2,x3;
	float rx0,rx1,rx2,rx3;
	printf("for f0\n");
	printf("Enter x0:");
	scanf("%d",&a);
	printf("Enter x1:");
	scanf("%d",&b);
	printf("Enter x2:");
	scanf("%d",&c);
	printf("Enter x3:");
	scanf("%d",&d);
	valu = value;
	rx0 = valu -a;
	printf("%f",rx0);
	
	
}
int main(){
	float fx , f0;
	printf("Enter your fx");
	scanf("%f",&fx);
	f0 = function1( fx);
}

