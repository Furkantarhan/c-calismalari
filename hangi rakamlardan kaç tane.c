#include <stdbool.h>
#include <stdio.h>


int main(){

	int i,j, s;
	int dizi[10];
	
	printf("DIZININ ELEMANLARINI GIRINI7Z =\n");
	
		for(i=0;i<10;i++){
		scanf("%d", &dizi[i]);
	}
	
	int tekrarlanansayilar[10];
	
	int ayni=0;
	bool aynisiolanlar;
	
	for(i=0; i<10; i++)
	{
		
		s=1;
		
		for(j=i+1; j<10; j++)
		{
			if(dizi[i]==dizi[j])
			{
				s++;
			}
		}
		
		aynisiolanlar = false;
		
		for(j=0;j<ayni;j++)
		{
			if(dizi[i]==tekrarlanansayilar[j])
			{
				aynisiolanlar = true;
			}
		}
		
		if(!aynisiolanlar && s>1)
		{
			printf("%d >>> %d adet \n", dizi[i], s);
			tekrarlanansayilar[ayni]=dizi[i];
			ayni++;			
		}
		
	}
	return 0;
}