//Write a program to approximate the functional value at any given x from given n no. of data using Lagrange's interpolation.

#include<stdio.h>
float lagrangeInterpolation(int num);
float arrX[100],arrY[100];
float x;
int count = 0;
int main(){
	
	int num,i;
	float y = 0;
	printf("Enter number of known points :");
	scanf("%d",&num);
	
	for(i=0;i<num;i++){
		printf("Enter point %d :",i);
		scanf("%f %f",&arrX[i],&arrY[i]);
	}
	printf("Enter x :");
	scanf("%f",&x);
	for(i=0;i<num;i++){
		y = y + lagrangeInterpolation(num);
		count++;
	
		//printf("\n%f\n\n",y);
	}
	
	printf("(%f,%f) is the required point.",x,y);
}

float lagrangeInterpolation(int num){
	float nume = 1,deno = 1;
	int i;
	
	for(i=0;i<num;i++){
		if(i == count){
			continue;
		}
		
		nume = nume * (x-arrX[i]);
		
		//printf("\n%f = %f -%f",nume,x,x-arrX[i]);
		
		deno = deno * (arrX[count] - arrX[i]);
		
		//printf("\n%f = %f - %f",deno,arrX[count],arrX[i]);
	}	
	
	return (nume/deno)*arrY[count];
}
//Output:
//Enter number of known points :4
//Enter point 0 :1 2
//Enter point 1 :2
//2.5
//Enter point 2 :3 5
//Enter point 3 :10 6
//Enter x :8
//(8.000000,17.291666) is the required point.



