#include <stdio.h>
#include <conio.h>

int fact(int);
int main(){
	printf("bir sayi giriniz");
	int x;
	scanf("%d",&x);
	printf("girilen say�n�n faktoriyeli : %d",fact(x)); //fact() fonk. tekrardan �a��r�p kullanabiliriz.
	getch();
	
}
int fact(int x){
	int sonuc = 1;
	for(int i=1;i<=x;i++){
		sonuc *= i;
	}
	return sonuc; // return, fonksiyonun �a�r�ld��� yere d�nd�r�lmesini sa�lar.
}
