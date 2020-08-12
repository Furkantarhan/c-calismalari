#include<stdio.h>
main(){
	int sayilar []= {44,58,76,65,78,98,12,76,54,32};
	int sayi,i,bulundu=0;
	printf("Bir deger girini : ");
	scanf("%d",&sayi);
	for(i=0;i<10;i++){
		if(sayilar[i]==sayi){
			bulundu=1;
			break;
		}
	}
	if(bulundu==1){
		printf("Girilen %d degeri dizinin %d. indisinde bulunur.\n",sayi,i);
	}
	else {
		printf("BULUNAMADI");
	}
}