#include <stdio.h>

int main(){
	int mesai;
	printf("Lutfen mesai saatini giriniz");
	scanf("%d",&mesai);
	if(mesai<=10){
		printf("ucret = %d",mesai*5);
	}
	else if(mesai > 10 && mesai <=20) /* "mesai > 10 yazmam�za 
	gerek yok.��nk� zaten de�ilse if blo�undaki kod �al��acak.*/
		printf("ucret = %d",10*5 + (mesai-10) *3);
	else
		printf("ucret = %d",10*5 + 10*3 + (mesai-20) *2);
	
}
