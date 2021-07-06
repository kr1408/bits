/*
   *
  ***
 *****
*******
*/
#include<stdio.h>
void main()
{
	int a,b,c,i,j,k;
	printf("enter number of rows");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++)
	{
		for(j=1;j<2*a;j++)
		{
			if(j<=a-i||j>=a+i)
			printf("   ");
			else
			printf(" * ");
		}printf("\n");
	}
}
