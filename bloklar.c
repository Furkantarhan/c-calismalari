/* Bu kod blok konusunu denemek i�in 
yaz�lm��t�r.
*/
#include <stdio.h>
#include <conio.h>
int main(){ 
	// a isminde bir de�i�ken main fonksiyonu 
	// i�erisinde tan�mlan�yor.
	int a = 10;
	int b = 0;
	{
		// k�me parantezleri ile bir alt blok olu�tu.
		int a = 5;
		b = 5;
		printf("\n%d",a);
	}
	printf("\n%d",a); /* ";" i�areti olan sat�rlar "statement"
	
	yani talimatlard�r.*/ 
	printf("\n%d",b);
	getch();
	return 0;
}

