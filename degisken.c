#include <stdio.h>
#include <conio.h>
/* yorum */
int main(){
	int a = 10;
	int b = 3,c = 4;
	int x;
	printf("\\ \" \t\n a : %d , b : %d , c : %d",a,b,c);
	a = 20; b = 30 ; c = 40;
	/* back slash karakteri ile baz� �zel semboller bast�r�labilir.*/
	printf("\n a : %d , b : %d , c : %d",a,b,c);
	printf("L�tfen bir say� giriniz");
	scanf("%d",&x);
	/*hayat
	hikayem
	*/
	printf("Girilen say� : %d",x);
	float pi = 3.14;
	printf("%8.4f",pi); /* kayan nokta� say� yani float'�n 
	toplam 8 karakter uzunlu�unda ve noktadan sonra 4 karakter
	uzunlu�undan olmas�n� sa�land�*/
	getch();
	//deneme yorumu
	return 0 ;
}
