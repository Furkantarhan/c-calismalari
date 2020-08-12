#include <stdio.h>
	
	int main()
		{
			int rdeger=3;
			int a;
	do{
		printf("1-10 Arasinda Bir Sayi Giriniz=");
		scanf("%d",&a);
		if(a == rdeger){
		printf("Tebrikler!!Dogru Tahmin");break;
		}
		
		else{
			printf("Tekrar Deneyin:( \n");
		}
	
	}
		while(1 == 1);
}

