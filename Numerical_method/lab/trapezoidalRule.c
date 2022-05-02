//Trapezoidal method  
//Step 1. Start 
//Step 2.the lower and upper limits and number of subintervals
//Step 3. Compute h=(x1-x0)/n;
//Step 4. Calculate f(x0) and f(x1)
//Step 5.calcualte the value of integration by using formula
//V = h[f(x0)+ f(x1)]/2
//Step 6. Print result;



#include<stdio.h>
#include<conio.h>

#define f(x)x+2
int main(){
	float h,x0,x1,fx0,fx1,v;
	printf("Enter lower and upper limit ");
	scanf("%f %f",&x0,&x1);
	h = x1-x0;
	fx0=f(x0);
	fx1=f(x1);
	
	v = h*(fx1+fx0)/2;
	printf("the value of intergration : %f",v);
	getch();
	return 0;
}
//Output
//Enter lower and upper limit 0 3
//the value of intergration : 10.500000

