#include<stdio.h>
#include<conio.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
	
	printf("Hello World\n");
	printf("I am after forking\n");
	printf("\t I am process %d .\n",getpid());
	return 0;
}
