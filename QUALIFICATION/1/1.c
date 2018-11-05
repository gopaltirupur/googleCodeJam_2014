#include<stdio.h>

void main()
{
	int no_of_cases = 0;
	int i,j,k;
	int matrix1[4][4],matrix2[4][4];
	int remember1,remember2;
	
	
	scanf("%d",&no_of_cases);
	
	for(i=0;i<no_of_cases;i++)
	{
			int match_count=0;
			int match=0;
			scanf("%d",&remember1);			
			
			
			for(j=0;j<4;j++)
				for(k=0;k<4;k++)
					scanf("%d",&matrix1[j][k]);
					
			scanf("%d",&remember2);			
				
			for(j=0;j<4;j++)
				for(k=0;k<4;k++)
					scanf("%d",&matrix2[j][k]);
		
			for(j=0;j<4;j++)
				for(k=0;k<4;k++)
				{
//					printf("\n Comp %d   %d  %d  %d ",j,k,matrix1[remember1-1][j],matrix2[remember2-1][k]);
					if(matrix1[remember1-1][j]==matrix2[remember2-1][k])
					{
							match_count++;						
							match=matrix1[remember1-1][j];
//							printf("iteration %d  match count  %d    match  %d",i,match_count,match);
					}
				}				
						
			if(match_count==1)
				printf("Case #%d: %d\n",i+1,match);
			else if(match_count>1)
				printf("Case #%d: Bad magician!\n",i+1);
			else
				printf("Case #%d: Volunteer cheated!\n",i+1);
	}	
}
