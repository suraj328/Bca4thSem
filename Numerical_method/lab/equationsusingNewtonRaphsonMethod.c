//Find the root of the following equations using the Newton Raphson Method
//Algorithm:
//1.		Start
//2.	Read x, e, n, d
//*x is the initial guess
//e is the absolute error i.e the desired degree of accuracy
//n is for operating loop
//d is for checking slope*
//3.	Do for i =1 to n in step of 2
//4.	f = f(x)
//5.	f1 = f'(x)
//6.	If ( [f1] < d), then display too small slope and goto 11.
//*[ ] is used as modulus sign*
//7.	x1 = x - f/f1
//8.	If ( [(x1 - x)/x1] < e ), the display the root as x1 and goto 11.
//*[ ] is used as modulus sign*
//9.	x = x1 and end loop
//10.	Display method does not converge due to oscillation.
//11.	Stop

#include<stdio.h>
#include<math.h>
void printline(int num,int remo);
float absolute(float value);

void main(){
	int iteration = 0;
	float value,diff_value,error,total;
	float max_error,x;
	printf("Enter Significant Error : ");
	scanf("%f",&max_error);
	
	printf("Enter Value: ");
	scanf("%f",&x);
	
	printline(14,3);
	printf("|   Iteration   |\tx\t\t|\tf(x)\t\t|\tdf(x)\t\t|\tXn+1\t\t|      Error      \t|\n");
	printline(14,3);
	do{
		iteration++;
			value = x*x*x-x+5;
		diff_value = 3*x*x-1;
		total = x-(value/diff_value);
		error = absolute((total-x)/total);
		printf("|\t%d\t|\t%f\t|\t%f\t|\t%f\t|\t%f\t|      %f  \t|\n",iteration,x,value,diff_value,total,error);
		x = total;
	}while(error > max_error);	
	printline(14,3);
	printf("\n\n\n");
	main();
}
void printline(int num,int remo){
	int i;
	for(i=0;i<num*10-remo;i++){
		printf("-");
	}
	printf("\n");
}
float absolute(float value) {
  if (value < 0)
    return -value;
  return value;  
}
//Output:
//Enter Significant Error : 0.005
//Enter Value: 1

