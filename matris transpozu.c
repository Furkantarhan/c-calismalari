#include <stdio.h>
#include <stdlib.h>


int main(){
	
	int i,j;
	int matris[3][2], mT[3][2];
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("matris[%d][%d]:",i+1,j+1);
			scanf("%d",&matris[i][j]);
		}	
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			mT[j][i]=matris[i][j];
		}
	}
	
	printf("DEGERLERÝ GÝRÝLEN MATRÝS =:\n");
	
	printf("\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",matris[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	printf("MATRÝSLERÝN TRANSPOZU=\n");
	printf("\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",mT[i][j]);
		}
		printf("\n");
	}
	
	
}