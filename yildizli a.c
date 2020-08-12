#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,j,t;
	
	for(i=1;i<=5;i++)
	{
		
		for(j=1;j<=5-i;j++)
		{
			
			printf(" ");
		}
		printf("a");
		for(t=1; t<=i+i-1;t++)
		{
			
			printf("*");
		}
		
		printf("\n");
	}
}