//Find the root of the following equations using the Bisection 

//algorithm

//1. Start
//2. Read x1, x2, e
//*Here x1 and x2 are initial guesses
//e is the absolute error i.e. the desired degree of accuracy*
//3. Compute: f1 = f(x1) and f2 = f(x2)
//4. x = (x1 + x2)/2
//5. If ( [ (x1 – x2)/x ] &lt; e ), then display x and goto (11).
//* Here [ ] refers to the modulus sign. *
//6. Else, f = f(x)
//7. If ((f*f1) &gt; 0), then x1 = x and f1 = f.
//8. Else, x2 = x and f2 = f.
//9. Goto (5).
//*Now the loop continues with new values.*
//10. Stop

#include <iostream>
#include<cmath>
#include <iomanip>
using namespace std;	
void printRow(int iteration,float a,float value_a,float b,float value_b,float mid,float value,float error){
	cout <<iteration <<"\t | \t"<< a <<"\t | \t"<<setprecision(5)<< value_a <<"\t | \t";
	cout << b <<"\t | \t"<<setprecision(5)<< value_b <<"\t | \t"<< mid <<"\t | \t";
	cout <<setprecision(5) << value <<"\t | \t";
	cout <<setprecision(7) << error <<"\t | \t"<<endl;
}

void printLine(int num,int rem){
	for(int i=0;i<num*10-rem;i++){
		cout << "-";
	}
	cout << endl;
}

int main() {
	float value;
	float a,b;
	float mid;
	float max_error;
	cout << "Enter Siginificant Digit : ";
	cin >> max_error;
	cout << "Enter value range (low high) : ";
	cin >> a >> b;
	printLine(13,0);
	cout << "Iteration|\ta(-ve)\t |\tf(a)\t |\tb(+ve)\t |\tf(b)\t |\tmid\t |\tf(mid)\t |\terror            |" << endl;
	printLine(13,0);	
	int iteration = 0;
	float error = 100;
	float old_mid = 0,value_a,value_b;	
	while (error >= max_error){
		iteration++;
		mid = (a+b)/2;
		error = abs((mid-old_mid)/mid);	
		if(iteration == 1){ error = 1.111111;}
		value_a = sin(a)-cos(a)+5*a*a;
		value_b =sin(mid)-cos(mid)+5*mid*mid;
		value =  sin(mid)-cos(mid)+5*mid*mid;
		printRow(iteration,a,value_a,b,value_b,mid,value,error);
		if(value < 0){
			b = mid;
		}else{
			a = mid;
		}
		
		old_mid = mid;
	}
	
	printLine(13,0);
	cout << "\n\n";
	main();
}

//Output:
//Enter Siginificant Digit : 0.05
//Enter value range (low high) : 1 0

