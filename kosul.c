#include <stdio.h>
#include <conio.h>

int main(){
	int i;
	scanf("%d",&i);
	if(i>5) // ko�ul kontrol� ve dallanmay� sa�layan kod
	{
		printf("Buyuk"); // ko�ul do�ruysa bu alt program �al���r.
	} else { // ko�ul yanl��sa durumu kontrol ediliyor.
		printf("Buyuk degil");
	}
	printf("Bitti");
	getch();
	
}
