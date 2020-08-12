#include <stdio.h>
int main()
{
	float v,f,ortalama;
	 
	printf("Vize Notunu Gir=");
	scanf("%f",&v);

	printf("Final Notunu Giriniz=");
	scanf("%f",&f);
	
	ortalama=(v*0.4+f*0.6);
	printf("Donem Ortalamaniz=%.2f\n",ortalama);
	if (ortalama>60)
		printf("Gectiniz");	
else
		printf("Kaldiniz");
		
	
}
