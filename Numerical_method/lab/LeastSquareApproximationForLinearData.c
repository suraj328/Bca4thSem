//Write a program to implement least square approximation for non- linear data.
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int n,i,j,k;
	float a= 0,b=0,x[10], y[10],sx=0,slogy=0,sxlogy=0,sx2=0, r;
	printf("Enter the no Of points: ");
	scanf("%d",&n);
	fflush(stdin);	
	for(i=0;i<n;i++){
		printf("Enter value of x : ");
		scanf("%f",&x[i]);
		printf("Enter value of fx : ");
		scanf("%f",&y[i]);		
	}
	fflush(stdin);
	//calculate sumation 
	for(i=0;i<n;i++){
		sx +=x[i];
		slogy+=log(y[i]);
		sxlogy +=x[i]*log(y[i]); 
		sx2+=pow(x[i],2);
	}
	b = ((n*sxlogy)-(sx*slogy))/((n*sx2)-pow(sx,2));
	r = (slogy/n) - (b*sx/n);
	a= exp(r);
	printf("The fitted line is :  %fe^%fx",a,b);
	getch();
	return 0;

}
//Output:
//Enter the no Of points: 5
//Enter value of x : 1
//Enter value of fx : 0.5
//Enter value of x : 2
//Enter value of fx : 2
//Enter value of x : 3
//Enter value of fx : 4.5
//Enter value of x : 4
//Enter value of fx : 8
//Enter value of x : 5
//Enter value of fx : 12.5
//The fitted line is :  0.324534e^0.782404x

