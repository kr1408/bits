//circular shift using fxn
#include<stdio.h>
void cir_shift(int a,int b,int c);
void main()
{
	int x,y,z;
	printf("enter three numbers  \n");
	scanf("%d%d%d",&x,&y,&z);
	printf("before shift number are : \nx=%d   y=%d    z=%d\n",x,y,z);
	cir_shift(x,y,z);
}
void cir_shift(int a,int b,int c)
{
	a=a+b;
	b=a-b;
	a=a-b;
	a=a+c;
	c=a-c;
	a=a-c;
	printf("before shift number are : \nx=%d   y=%d    z=%d\n",a,b,c);
}
