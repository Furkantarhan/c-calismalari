#include<stdio.h>

int main () {
	
	int toplam = 0;
	
	int i;
	
	int sayi;
	
	for (i = 0 ; true;i++){
		printf("Sayiyi Giriniz: (Cikmak icin -1 basiniz)1___");
		scanf("%d",&sayi);
		
		if (sayi == -1){
			break;
		}
		
		toplam += sayi;
	}
	printf("%d \n",toplam);
	
	
	
	return 0;
}
