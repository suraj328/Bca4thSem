//Gauss integration algorithm 
#include<stdio.h>
#include<conio.h>

#define f(x)x*x*x+1
int main(){
	float a,b,z1,z2,c1,c2,x1,x2,v;
	printf("Enter lower and upper limit ");
	scanf("%f %f",&a,&b);
	//set value of parameter
	c1=c2=1;
	z1= -0.57735;
	z2= 0.57735;
	x1 =(b-a)*z1/2+(b+a)/2;	
	x2 =(b-a)*z2/2+(b+a)/2;
	
	v = (b-a)*(f(x1)+f(x2))/2;
	printf("the value of intergration : %f",v);
	getch();
	return 0;

}

//Output 
//Enter lower and upper limit  0 3
//the value of intergration : 23.249989
