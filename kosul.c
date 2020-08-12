#include <stdio.h>
#include <conio.h>

int main(){
	int i;
	scanf("%d",&i);
	if(i>5) // koþul kontrolü ve dallanmayý saðlayan kod
	{
		printf("Buyuk"); // koþul doðruysa bu alt program çalýþýr.
	} else { // koþul yanlýþsa durumu kontrol ediliyor.
		printf("Buyuk degil");
	}
	printf("Bitti");
	getch();
	
}
