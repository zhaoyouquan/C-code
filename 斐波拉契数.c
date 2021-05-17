#include<stdio.h>
int main()
{
	int n;
	long a=1,b=2,c;
	printf("%ld,%ld",a,b);
	for(n=1;n<=18;n++)
	{
		c=a+b;
		printf(",%ld",c);
		a=b;
		b=c;
	
	}
	printf("\n");
	
	
	return 0;
 } 
