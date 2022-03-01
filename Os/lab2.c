//lab2
#include<stdio.h>
//#include<conio.h>
int main()
{
	int p[20],bt[20],wt[20],tat[20],i,n,k,temp;
	float wtavg,tatavg;
//	clrscr();
	printf("\n Enter the number of process--");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		p[i]=i;
		printf("Enter The Brust time for process %d");
		scanf("%d",&bt[i]);	
	}
	for(i=0;i<n;i++)
	for(k=0;k<n;k++){
		if(bt[i]>bt[k])
		{
			temp=bt[i];
			bt[i]=bt[k];
			bt[k]=temp;
			temp=p[i];
			p[i]=p[k];
			p[k]=temp;
		}
		wt[0]=wtavg=0;
		tat[0]=tatavg=bt[0];
		for(i=0;i<n;i++)
		{
			wt[i]=wt[i-1]+bt[i-1];
			tat[i]=tat[i-1]+bt[i];
			wtavg = wtavg + wt[i];
			tatavg = tatavg + tat[i];
		}
		
		printf("\n\t process \t burst \t waiting time \t turn aroount time\n");
		for(i=0;i<n;i++){
			printf("\n\t p%d\t\t %d \t\t %d",p[i],wt[i],tat[i]);
			printf("\nAverage Waiting Time --%f ",wtavg/n);
			printf("\nAverage TurnAROUND TIME --%f",tatavg);
		}
	}
	
}
