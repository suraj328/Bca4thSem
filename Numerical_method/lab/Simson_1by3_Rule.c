//Simson 1/3 rule 
//Algorithm 
//1)	Start
//2)	Define function f(x)
//3)	Read lower limit of integration, upper limit of 
//4)	integration and number of sub interval
//5)	Calculate: step size = (upper limit - lower limit)/number of sub interval
//6)	find f(x0), f(x2), f(x2)
//7)	11. Calculate: Integration value = Integration value * step size/3 
//8)	12. Display Integration value as required answer
//9)	13. Stop 

//Source code 
#include<stdio.h>
#include<conio.h>

#define f(x)3*x*x+2*x-5
int main(){
	float h,x0,x1,x2,fx0,fx1,fx2,v;
	printf("Enter lower and upper limit ");
	scanf("%f %f",&x0,&x2);
	h = (x2-x0)/2;
	x1=x0+h;
	fx0=f(x0);
	fx1=f(x1);
	fx2=f(x2);
	
	v = h*(fx0+4*fx1+fx2)/3;
	printf("the value of intergration : %f",v);
	getch();
	return 0;
}

//Output 
//Enter lower and upper limit 0 3
//the value of intergration : 21.000000
