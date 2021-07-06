/* to print
    1
   12
  123
 1234
12345
*/

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
			i<j?printf(" "):printf("%d",k-j+1);
		}printf("\n");
	}
	
}
