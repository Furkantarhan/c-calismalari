#include <stdio.h>
int main()
{
	float a;
	printf("Yasinizi Giriniz=");
	scanf("%f",&a);
	printf("%f Gun",a*365);
	printf("\n%f Saat",a*(365*24));
	printf("\n%f Dakika",(a*(365*24))*60);
	printf("\n%f Saniye",((a*(365*24))*60)*60);
	printf("\n%f Salise Yasadiniz",(((a*(365*24))*60)*60)*100);
}
