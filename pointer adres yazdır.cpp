#include<stdio.h>
main(){
	int sayi = 5;
	char karakter = 'A';
	float ondalik = 5.4;
	
	int *p_sayi;
	char *p_karakter;
	float *p_ondalik;
	
	p_sayi=&sayi;
	p_karakter=&karakter;
	p_ondalik=&ondalik;
	
	printf("%d  sayisinin adresi : %x\n",sayi,p_sayi);
	printf("%c  karakterinin adresi : %x\n",karakter,p_karakter);
	printf("%.1f  ondaligin adresi : %x\n",ondalik,p_ondalik);
}