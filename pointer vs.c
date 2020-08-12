#include <stdio.h>
#include <stdlib.h>


	int main(){
	
	int dizi[15],*ptr;
	int i,j,l;
	ptr = dizi;
	
	printf("Son elemanini giriniz=:");
	scanf("%d",&*(ptr+14));	
	printf("islem baslayacaktir..\n");	
	
	for(i=13;i>=0;i--)
	{
		*(ptr+i)=(*(ptr+i+1)*4)+2;
		
	}
	for(j=0;j<=14;j++)
	{
		printf("%d.Eleman = %d\n",j+1,*(ptr+j));
	}
	printf("\n");
	printf("\n");
	printf("\n");
	printf("3 ile tam bolunenler :\n");
	
	for(l=0;l<=14;l++)
	{
		if(*(ptr+l)%3==0)
		{
			printf("%d.Eleman : %d\n",l+1,*(ptr+l));
		}
	}
	
	free(ptr);
}