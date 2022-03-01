//	f(x)=cos(x) -e^-x +5
#include<stdio.h>
#include<math.h>
int main(){
	int count=0,posNum,negNum;
	float fneg,fpos,fmid,fxmid,err;
	while(1)
	{
		int fnum,snum;
		float firstResult,secResult,posNumber,negNumber;
		printf("Most choose two interval number one negative and one positive number\n");
		printf("Enter First Number:\n");
		scanf("%d",&snum);
		printf("Enter Second Number:\n");
		scanf("%d",&fnum);
	
		printf("Your given interval value is:\n");
		firstResult = cos(fnum)-exp(-fnum)+5;
		secResult = cos(snum)-exp(-snum)+5;
		if(firstResult>0)
		{
			posNumber=firstResult;
			posNum=fnum;
//			printf("Your Positve value is:\t%f\n",posNumber);
		}else
		{
			negNumber=firstResult;
			negNum=snum;
//			printf("Your Negative value is:\t%f\n",negNumber);
		}
		
		if(secResult<0)
		{
			negNumber=secResult;
			negNum=snum;
//			printf("Your Negative value is:\t%f\n",negNumber);
		}else
		{
			posNumber=secResult;
			posNum=fnum;
//			printf("Your psoitive value is:\t%f\n",negNumber);
		}
		
		if(posNumber>0 && negNumber>0)
		{
			printf("Your both number are positive\t");
			printf("\"please choose one negative and one positive\"\n\n\n");
		}
		else if(posNumber<0 && negNumber<0){
			printf("Your both number are negative\t");
			printf("\"please choose one negative and one positive\"\n\n\n");
		}
		
		if((firstResult>0 && secResult<0)  || (firstResult<0 && secResult>0))
		{
			printf("Itteration calculation satrt\n");
			break;
		}
		
	}
	while(1)
	{
		printf("%d\n %d",negNum,posNum);
		fneg = cos(negNum)-exp(-negNum)+5;
		printf("%f\n",fneg);
		fpos = cos(posNum)-exp(-posNum)+5;
		printf("%f\n",fpos);
		fmid = ((float)posNum+negNum)/2;
		printf("%.3f\n",fmid);
		fxmid = cos(fmid)-exp(-fmid)+5;
		printf("%.4f\n",fxmid);
		err = (float)(posNum-negNum)/(float)posNum;
		printf("%f",err);
		break;
	}	
	
}
