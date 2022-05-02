//Find the root of the following equations using the Fixed Point Iteration Method
#include<math.h>
#include<stdio.h>
void printline(int x,int remo);
float absolute(float value);
void main(){
	float max_error,error = 0,x;
	int iteration = 0;
	float value,total;
	printf("Enter Significant Error: ");
	scanf("%f",&max_error);
	printf("Enter value: ");
	scanf("%f",&x);
	printline(9,1);
	printf("|  Iteration    |\tXn\t\t|\tXn+1\t\t|\tError\t\t|\n");
	printline(9,1);
	do{
		iteration++;
		value = sin(x)+5;
		
		
		error = absolute((value-x)/value);
		printf("|\t%d\t|\t%f\t|\t%f\t|\t%f\t|\n",iteration,x,value,error);
		x = value;
	}while(error>max_error);
	printline(9,1);
	printf("\n\n\n");
	main();
}

void printline(int x,int remo){
	int i;
	for(i=0;i<x*10-remo;i++){
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
//Enter Significant Error: 0.05
//Enter value: 1

