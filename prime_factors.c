#include<stdio.h>
void fac(int a)
{
	int count=0,b;
	for(b=2;a>1;b++)
	{
		while(a%b==0)
		{
			printf("%4d",b);
			a/=b;
		}
	}
}
void main()
{
	int a;
	printf("enetr number");
	scanf("%d",&a);
	fac(a);
}
