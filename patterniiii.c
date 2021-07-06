/* TO PRINT 
     *
    ***
   *****
    ***
     * */
#include<stdio.h>
void main()
{
	int i,j,k;
	printf("Enter number  : ");
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		for(j=1;j<=k;j++)
		{
			i<j?printf(" "):printf("*");
		}printf("\n");
	}
	
}
