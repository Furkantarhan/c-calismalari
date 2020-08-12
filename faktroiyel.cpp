#include <stdio.h>
	int main ()
	{
		//klavyeden girilen sayýnýn faktoriyelini alma
		 int a,t=1;
		printf("bir tam sayi giriniz.\n");
		scanf("%d",&a);
		
		if(a>=0){
			for(int i=a;i>0;i--){
			t=t*i;
		}
			printf("foktoriyel alinan sayi=%d",t);
		}
		 else{
			printf("negatif bir tm sayi girdiniz.");
		}
	
	}

