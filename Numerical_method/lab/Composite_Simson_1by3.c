//Composite Simson 1/3 
//Algorithm 
//1)	Start
//2)	Define function f(x)
//3)	Read lower limit of integration, upper limit of 
//4)	integration and number of sub interval
//5)	Calculate: step size = (upper limit - lower limit)/number of sub interval
//6)	Set: integration value = f(lower limit) + f(upper limit)
//7)	Set: i = 1
//8)	If i > number of sub interval then goto 
//9)	Calculate: k = lower limit + i * h
//10)	If i mod 2 =0 then 
//11)	Integration value = Integration Value + 2* f(k)
//12)	Otherwise
//13)	Integration Value = Integration Value + 4 * f(k)
//14)	End If
//15)	Increment i by 1 i.e. i = i+1 and go to step 7
//16)	Calculate: Integration value = Integration value * step size/3 
//17)	Display Integration value as required answer
//18)	Stop 

//Source code 
#include<stdio.h>
#include<conio.h>

#define f(x) 1/(1+x)

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
	
	for(i=1;i<=k-1;i=i+2){
		a=x0+i*h;
		term=term+4*(f(a));
	}
	for(i=2;i<=k-2;i=i+2){
		a=x0+i*h;
		term=term+2*(f(a));
	}
	v = h*term/3;
	printf("the value of intergration : %f",v);
	getch();
	return 0;
}
//Output 
//Enter lower and upper limit 0 3
//Enter segment 2
//the value of intergration : 1.425000
