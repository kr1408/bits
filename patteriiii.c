/*TO PRINT
1
21
321
4321
54321   */

/*
modifies to take entery from user*/
#include<stdio.h>
void main()
{
	int i,j,k;
	printf("Enter number  : ");
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		for(j=i;j>=1;j--)
		{
			printf("%3d",j);
		}printf("\n");
	}
	
}
