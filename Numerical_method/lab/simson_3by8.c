//Simson 3/8 rule 
#include<stdio.h>
#include<conio.h>

#define f(x)x*x*x+1
int main(){
	float h,x0,x1,x2,x3,fx0,fx1,fx2,fx3,v;
	printf("Enter lower and upper limit ");
	scanf("%f %f",&x0,&x3);
	h = (x3-x0)/3;
	x1=x0+h;
	x2=x1+h;
	fx0=f(x0);
	fx1=f(x1);
	fx2=f(x2);
	fx3=f(x3);
	
	v = 3*h*(fx0+3*fx1+3*fx2+fx3)/8;
	printf("the value of intergration : %f",v);
	getch();
	return 0;
}

//Output 
//Enter lower and upper limit 0 3
//the value of intergration : 23.250000
