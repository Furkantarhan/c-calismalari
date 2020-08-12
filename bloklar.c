/* Bu kod blok konusunu denemek için 
yazýlmýþtýr.
*/
#include <stdio.h>
#include <conio.h>
int main(){ 
	// a isminde bir deðiþken main fonksiyonu 
	// içerisinde tanýmlanýyor.
	int a = 10;
	int b = 0;
	{
		// küme parantezleri ile bir alt blok oluþtu.
		int a = 5;
		b = 5;
		printf("\n%d",a);
	}
	printf("\n%d",a); /* ";" iþareti olan satýrlar "statement"
	
	yani talimatlardýr.*/ 
	printf("\n%d",b);
	getch();
	return 0;
}

