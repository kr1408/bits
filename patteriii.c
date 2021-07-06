/*TO PRINT
    *
   **
  ***
 ****
*****   */
#include<stdio.h>
void main()
{
	int i,j,k;
	for(i=6;i>1;i--)
	{
		for(j=1;j<6;j++)
		{
			if(i<j+2)
			printf("*");
			else
			printf(" ");
		}printf("\n");
	}
}
