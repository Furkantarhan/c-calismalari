#include <stdio.h>
#include <conio.h>
/* yorum */
int main(){
	int a = 10;
	int b = 3,c = 4;
	int x;
	printf("\\ \" \t\n a : %d , b : %d , c : %d",a,b,c);
	a = 20; b = 30 ; c = 40;
	/* back slash karakteri ile bazý özel semboller bastýrýlabilir.*/
	printf("\n a : %d , b : %d , c : %d",a,b,c);
	printf("Lütfen bir sayý giriniz");
	scanf("%d",&x);
	/*hayat
	hikayem
	*/
	printf("Girilen sayý : %d",x);
	float pi = 3.14;
	printf("%8.4f",pi); /* kayan noktaý sayý yani float'ýn 
	toplam 8 karakter uzunluðunda ve noktadan sonra 4 karakter
	uzunluðundan olmasýný saðlandý*/
	getch();
	//deneme yorumu
	return 0 ;
}
