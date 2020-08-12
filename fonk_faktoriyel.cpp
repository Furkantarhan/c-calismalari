#include <stdio.h>
#include <conio.h>

int fact(int);
int main(){
	printf("bir sayi giriniz");
	int x;
	scanf("%d",&x);
	printf("girilen sayýnýn faktoriyeli : %d",fact(x)); //fact() fonk. tekrardan çaðýrýp kullanabiliriz.
	getch();
	
}
int fact(int x){
	int sonuc = 1;
	for(int i=1;i<=x;i++){
		sonuc *= i;
	}
	return sonuc; // return, fonksiyonun çaðrýldýðý yere döndürülmesini saðlar.
}
