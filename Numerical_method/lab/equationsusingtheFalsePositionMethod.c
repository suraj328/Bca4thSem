//Find the root of the following equations using the False Position Method
#include<stdio.h>
#include<math.h>
void printline(int x,int remo);
float absolute(float value);
int main(){
	int iteration = 0;
	float max_error,value;
	float value_low,value_high,error,mid,old_mid = 0;
	float a,b;
	printf("Enter Significant Error : ");
	scanf("%f",&max_error);
	printf("Enter Values (low high): ");
	scanf("%f %f",&a,&b);
	
	printline(19,5);
	printf("|   Iteration   |\t  a(-ve)     \t|\tf(a)\t\t|\t  b(+ve)   \t|\tf(b)\t\t|      mid\t\t|\tf(mid)\t\t|\tError\t\t|\n");
	printline(19,5);
	do{
		iteration++;
		value_low = sin(a)-cos(a)+5*a*a;
		value_high =sin(b)-cos(b)+5*b*b;
		mid = (a*value_high-b*value_low)/(value_high-value_low);
		value = sin(mid)-mid+5;		
		error = absolute((mid-old_mid)/mid);
		printf("|\t%d\t|\t%f\t|\t%f\t|\t%f\t|\t%f\t|       %f\t|\t%f\t|       %f\t|\n",iteration,a,value_low,b,value_high,mid,value,error);
		if(value < 0){
			b = mid;
		}else{
			a = mid;
		}
		old_mid = mid;
	}while(error > max_error);
	printline(19,5);
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
//Enter Significant Error : 0.05
//Enter Values (low high): 1 0

