#include<stdio.h>

int check(int *incrementer1,int *incrementer2,double target,double cost_of_farm,double F,double *time_till);
void main()
{
	int count;
	int i;
	double C,F,X;
	
	
	scanf("%d",&count);
	
	for(i=0;i<count;i++)
	{
		double time_till = 0;		
		double temp_time = 0;
		
		int incrementer = 2;
		int incrementer1 = 2,incrementer2;
		
		scanf("%lf%lf%lf",&C,&F,&X);
				
		if(X<=C)
		{
			time_till = X / 2;
			printf("Case #%d: %lf\n",i+1,time_till);						
		}		
		else
		{
			incrementer2 = incrementer1 + F;
		
		
			while(check(&incrementer1,&incrementer2,X,C,F,&time_till))
			{
				printf("%d   %d   %lf  %lf  %lf  %lf ",incrementer1,incrementer2,X,C,F,time_till);
			}
			printf("Case #%d: %lf\n",i+1,time_till);				
		}	
		
		
	}	
}

int check(int *incrementer1,int *incrementer2,double target,double cost_of_farm,double F,double *time_till)
{
	
	double t1,t2,time_to_buy_farm;
	
	t1 = target / *incrementer1;
	t2 = target / *incrementer2;
	
	time_to_buy_farm = cost_of_farm / *incrementer1;
	
	if(t1<=(time_to_buy_farm+t2))
	{
		*time_till = *time_till + t1;
		printf("   *****   0 \n");
		return 0;
	}
	else 
	{
		*time_till = *time_till + time_to_buy_farm;
		*incrementer1 = *incrementer1 + F;
		*incrementer2 = *incrementer2 + F;
		printf("   *****  time_till : %lf   time_to_buy_farm : %lf  incrementer1 : %d     incrementer2 %d   ***   1 \n",*time_till,time_to_buy_farm,*incrementer1,*incrementer2);
		return 1;	
	}
}
