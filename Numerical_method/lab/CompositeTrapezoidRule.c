//Composite trapezoid 
//Algorithm 
//
//	Step 1. Input f(x);
//Step 2. Rread a,b,n; //the lower and upper limits and number of subintervals
//Step 3. Compute h=(b-a)/n;
//Step 4. Set sum =[f(a)+f(a+nh)]/2;
//Step 5. for i=1 to n-1 do
//		Compute sum = sum + f(a+ih);
//		endfor;
//Step 6. Compute result = sum * h;
//Step 7. Print result;
//


#include<stdio.h>
#include<conio.h>

#define f(x)3*x*x+2*x-5
int main(){
	int i,k;
	float a,h,x0,xn,fx0,fxn,v,term=0;
	printf("Enter lower and upper limit ");
	scanf("%f %f",&x0,&xn);
	printf("Enter segment ");
	scanf("%d",&k);
	h = (xn-x0)/k;
	fx0=f(x0);
	fxn=f(xn);
	term = f(x0)+f(xn);
	for(i=1;i<=k-1;i++){
		a=x0+i*h;
		term=term+2*(f(a));
	}
	v = h*term/2;
	printf("the value of intergration : %f",v);
	getch();
	return 0;
}

//Output 
//Enter lower and upper limit  0 3
//Enter segment  2
//the value of intergration : 24.375000



