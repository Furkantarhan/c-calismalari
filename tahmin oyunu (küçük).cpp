#include <stdio.h>
int main()
{
	int rDeger=3; //Rondom fonksiyonu bu sat�rda oldu�unu d���n�n.
	int a;
	do{
		printf("1 ile 10 arasinda bir sayi giriniz :");
		scanf("%d",&a);
		
		if(a==rDeger){
			printf("Tebrikler Degeri Dogru Tahmin Ettiniz");break;
		}
		else{
			printf("Tekrar Deneyin :( \n)");
		}
		
	}
	while(1==1);
}
