#include<stdio.h>
void main()
{
	int a,i,j;
	printf("enetr number:\n");
	scanf("%d",&a);
	for(i=1;i<=a+1;i++)
	{
		for(j=1;j<=a;j++)
		{
			if(j-i>=1)
			printf("   ");
			else
			printf("%3d",a-j+1);
		}
		for(j=a+1;j<=2*a+1;j++)
		{
			if(j+i<=2*a+1)
			printf("   ");
			else
			printf("%3d",j-a-1);
		}
		printf("\n");
	}
	for(i=a;i>=1;i--)
	{
		for(j=1;j<=a;j++)
		{
			if(j-i>=1)
			printf("   ");
			else
			printf("%3d",a-j+1);
		}
		for(j=a+1;j<=2*a+1;j++)
		{
			if(j+i<=2*a+1)
			printf("   ");
			else
			printf("%3d",j-a-1);
		}
		printf("\n");
	}
}
